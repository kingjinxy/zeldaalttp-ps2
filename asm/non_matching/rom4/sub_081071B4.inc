	THUMB_FUNC_START sub_081071B4
sub_081071B4: @ 0x081071B4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _081071D4  @ =gRam
	ldr r1, _081071D8  @ =0x00000FF2
	add r0, r4, r1
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #205
	beq _081071DC
	add r1, r0, #0
	add r0, r5, #0
	bl sub_08107260
	b _081071FA
	.byte 0x00
	.byte 0x00
_081071D4:
	.4byte gRam
_081071D8:
	.4byte 0x00000FF2
_081071DC:
	ldr r0, _08107200  @ =0x000015FA
	add r4, r4, r0
	mov r0, #0
	strb r0, [r4]
	ldrb r1, [r1]
	add r0, r5, #0
	bl sub_08107204
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	add r0, r5, #0
	mov r1, #205
	bl sub_08107204
_081071FA:
	pop {r4,r5}
	pop {r0}
	bx r0
_08107200:
	.4byte 0x000015FA
	THUMB_FUNC_END sub_081071B4

