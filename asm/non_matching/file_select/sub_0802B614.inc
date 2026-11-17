	THUMB_FUNC_START sub_0802B614
sub_0802B614: @ 0x0802B614
	push {r4,r5,lr}
	add r4, r0, #0
	ldr r0, [r4, #84]
	add r1, r4, #0
	bl sub_0803D3D0
	add r0, r4, #0
	mov r1, #1
	bl sub_08003870
	ldr r0, _0802B690  @ =gUnknown_03000948
	ldrh r0, [r0]
	mov r1, #1
	and r1, r1, r0
	ldrb r2, [r4, #28]
	mov r5, #4
	neg r5, r5
	add r0, r5, #0
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #255
	bne _0802B688
	ldr r0, [r4, #84]
	str r4, [r0, #88]
	ldr r1, _0802B694  @ =gUnknown_0201F000
	ldr r0, [r4, #84]
	add r2, r0, #0
	add r2, r2, #82
	ldrb r2, [r2]
	lsl r2, r2, #2
	add r2, r2, r1
	ldr r1, [r2]
	ldr r3, [r0, #124]
	orr r1, r1, r3
	str r1, [r2]
	bl sub_08003E44
	ldrb r1, [r4, #28]
	add r0, r5, #0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	mov r0, #1
	strb r0, [r4, #20]
	mov r0, #0
	strb r0, [r4, #21]
	mov r0, #15
	strb r0, [r4, #23]
	mov r0, #99
	bl sub_08003DFC
_0802B688:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802B690:
	.4byte gUnknown_03000948
_0802B694:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_0802B614

