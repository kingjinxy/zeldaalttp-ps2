	THUMB_FUNC_START sub_080EEFEC
sub_080EEFEC: @ 0x080EEFEC
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _080EF018  @ =gRam
	ldr r1, _080EF01C  @ =0x00000F92
	add r0, r0, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsl r1, r1, #4
	ldr r0, _080EF020  @ =gUnknown_08178A74
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #2
	bl sub_080C9480
	add r0, r4, #0
	bl sub_080C6230
	pop {r4}
	pop {r0}
	bx r0
_080EF018:
	.4byte gRam
_080EF01C:
	.4byte 0x00000F92
_080EF020:
	.4byte gUnknown_08178A74
	THUMB_FUNC_END sub_080EEFEC

