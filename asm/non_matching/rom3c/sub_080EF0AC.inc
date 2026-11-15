	THUMB_FUNC_START sub_080EF0AC
sub_080EF0AC: @ 0x080EF0AC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080EEE94
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EF0E2
	add r0, r4, #0
	bl sub_080C4F98
	ldr r1, _080EF0E8  @ =gUnknown_08178B94
	ldr r0, _080EF0EC  @ =gRam
	ldr r2, _080EF0F0  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080EF0E2:
	pop {r4}
	pop {r0}
	bx r0
_080EF0E8:
	.4byte gUnknown_08178B94
_080EF0EC:
	.4byte gRam
_080EF0F0:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080EF0AC

