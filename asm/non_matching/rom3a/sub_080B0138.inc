	THUMB_FUNC_START sub_080B0138
sub_080B0138: @ 0x080B0138
	push {lr}
	bl sub_08070918
	bl sub_08070064
	bl sub_080CBCD8
	ldr r1, _080B0170  @ =gRam
	ldr r0, _080B0174  @ =0x00000B52
	add r2, r1, r0
	mov r3, #0
	mov r0, #0
	strh r0, [r2]
	ldr r0, _080B0178  @ =0x000009AC
	add r2, r1, r0
	mov r0, #17
	strb r0, [r2]
	ldr r2, _080B017C  @ =0x000009AD
	add r0, r1, r2
	strb r3, [r0]
	ldr r0, _080B0180  @ =0x0000099C
	add r1, r1, r0
	strb r3, [r1]
	bl sub_080AF554
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B0170:
	.4byte gRam
_080B0174:
	.4byte 0x00000B52
_080B0178:
	.4byte 0x000009AC
_080B017C:
	.4byte 0x000009AD
_080B0180:
	.4byte 0x0000099C
	THUMB_FUNC_END sub_080B0138

