	THUMB_FUNC_START sub_08101714
sub_08101714: @ 0x08101714
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _0810174C  @ =gRam
	ldr r1, _08101750  @ =0x00001122
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #7
	strb r1, [r0]
	ldr r1, _08101754  @ =0x000010E2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
	add r0, r4, #0
	bl sub_0810072C
	cmp r0, #0
	beq _08101746
	ldr r0, _08101758  @ =0x00000F82
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_08101746:
	pop {r4,r5}
	pop {r0}
	bx r0
_0810174C:
	.4byte gRam
_08101750:
	.4byte 0x00001122
_08101754:
	.4byte 0x000010E2
_08101758:
	.4byte 0x00000F82
	THUMB_FUNC_END sub_08101714

