	THUMB_FUNC_START sub_0803367C
sub_0803367C: @ 0x0803367C
	push {r4,r5,lr}
	add r2, r0, #0
	mov r3, #128
	ldr r0, _080336A4  @ =0x00001FFF
	add r5, r0, #0
	ldr r0, _080336A8  @ =0xFFFFE000
	add r4, r0, #0
_0803368A:
	ldrh r0, [r2]
	add r2, r2, #2
	add r0, r0, #128
	and r0, r0, r5
	add r0, r0, r4
	strh r0, [r1]
	add r1, r1, #2
	sub r3, r3, #1
	cmp r3, #0
	bne _0803368A
	pop {r4,r5}
	pop {r0}
	bx r0
_080336A4:
	.4byte 0x00001FFF
_080336A8:
	.4byte 0xFFFFE000
	THUMB_FUNC_END sub_0803367C

