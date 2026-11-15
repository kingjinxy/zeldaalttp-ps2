	THUMB_FUNC_START sub_080EF050
sub_080EF050: @ 0x080EF050
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080EF078  @ =gUnknown_03003E74
	mov r1, #84
	strh r1, [r2]
	ldr r1, _080EF07C  @ =gRam
	ldr r2, _080EF080  @ =0x00000F92
	add r1, r1, r2
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #6
	ldr r2, _080EF084  @ =gUnknown_08178AE0
	add r1, r1, r2
	mov r2, #8
	bl sub_080C9480
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EF078:
	.4byte gUnknown_03003E74
_080EF07C:
	.4byte gRam
_080EF080:
	.4byte 0x00000F92
_080EF084:
	.4byte gUnknown_08178AE0
	THUMB_FUNC_END sub_080EF050

