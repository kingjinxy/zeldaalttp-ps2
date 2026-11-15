	THUMB_FUNC_START sub_08114480
sub_08114480: @ 0x08114480
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r1, _081144B0  @ =gUnknown_0817D900
	ldr r5, _081144B4  @ =gRam
	ldr r2, _081144B8  @ =0x000016B5
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	add r0, r4, #0
	mov r2, #0
	bl sub_080C9564
	ldr r0, _081144BC  @ =0x00000F52
	add r5, r5, r0
	add r4, r4, r5
	mov r0, #6
	strb r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
_081144B0:
	.4byte gUnknown_0817D900
_081144B4:
	.4byte gRam
_081144B8:
	.4byte 0x000016B5
_081144BC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08114480

