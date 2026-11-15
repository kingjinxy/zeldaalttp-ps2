	THUMB_FUNC_START sub_081144C0
sub_081144C0: @ 0x081144C0
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _081144E0  @ =gUnknown_0817D900
	ldr r1, _081144E4  @ =gRam
	ldr r3, _081144E8  @ =0x000016B5
	add r1, r1, r3
	ldrb r1, [r1]
	lsl r1, r1, #1
	add r1, r1, r2
	ldrh r1, [r1]
	mov r2, #0
	bl sub_080C9164
	pop {r0}
	bx r0
_081144E0:
	.4byte gUnknown_0817D900
_081144E4:
	.4byte gRam
_081144E8:
	.4byte 0x000016B5
	THUMB_FUNC_END sub_081144C0

