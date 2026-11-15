	THUMB_FUNC_START sub_0807A730
sub_0807A730: @ 0x0807A730
	push {r4-r6,lr}
	mov r2, #0
	ldr r0, _0807A77C  @ =gRam
	mov r3, #150
	lsl r3, r3, #4
	add r1, r0, r3
	strh r2, [r1]
	add r6, r0, #0
	mov r5, #128
	lsl r5, r5, #8
	add r4, r1, #0
	ldr r0, _0807A780  @ =0x0000199C
	add r3, r6, r0
_0807A74A:
	ldrh r1, [r3]
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0807A75A
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
_0807A75A:
	add r3, r3, #2
	add r2, r2, #1
	cmp r2, #15
	ble _0807A74A
	mov r1, #150
	lsl r1, r1, #4
	add r0, r6, r1
	mov r3, #0
	ldrsh r0, [r0, r3]
	cmp r0, #3
	ble _0807A774
	bl sub_0807A478
_0807A774:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807A77C:
	.4byte gRam
_0807A780:
	.4byte 0x0000199C
	THUMB_FUNC_END sub_0807A730

