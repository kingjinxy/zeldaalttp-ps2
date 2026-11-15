	THUMB_FUNC_START sub_081016C8
sub_081016C8: @ 0x081016C8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _08101700  @ =gRam
	ldr r1, _08101704  @ =0x00000F92
	add r4, r3, r1
	add r4, r0, r4
	ldr r5, _08101708  @ =gUnknown_0817AE39
	ldr r2, _0810170C  @ =0x00001052
	add r1, r3, r2
	add r1, r0, r1
	ldrb r1, [r1]
	lsr r1, r1, #3
	mov r2, #3
	and r1, r1, r2
	ldr r2, _08101710  @ =0x00000FB2
	add r3, r3, r2
	add r0, r0, r3
	ldrb r0, [r0]
	sub r0, r0, #2
	lsl r0, r0, #2
	add r1, r1, r0
	add r1, r1, r5
	ldrb r0, [r1]
	strb r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
_08101700:
	.4byte gRam
_08101704:
	.4byte 0x00000F92
_08101708:
	.4byte gUnknown_0817AE39
_0810170C:
	.4byte 0x00001052
_08101710:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_081016C8

