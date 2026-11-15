	THUMB_FUNC_START sub_0802452C
sub_0802452C: @ 0x0802452C
	push {r4,lr}
	add r4, r0, #0
	bl sub_0803CC20
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08024574
	mov r0, #15
	strb r0, [r4, #20]
	ldr r1, _0802457C  @ =gUnknown_08427698
	ldr r0, _08024580  @ =gUnknown_03006C80
	ldrb r0, [r0, #6]
	sub r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	str r0, [r4, #12]
	add r1, r4, #0
	add r1, r1, #110
	mov r0, #1
	strh r0, [r1]
	ldr r2, [r4, #84]
	add r2, r2, #125
	ldr r1, _08024584  @ =gUnknown_08137B10
	add r0, r4, #0
	add r0, r0, #126
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldrb r1, [r2]
	orr r0, r0, r1
	strb r0, [r2]
_08024574:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802457C:
	.4byte gUnknown_08427698
_08024580:
	.4byte gUnknown_03006C80
_08024584:
	.4byte gUnknown_08137B10
	THUMB_FUNC_END sub_0802452C

