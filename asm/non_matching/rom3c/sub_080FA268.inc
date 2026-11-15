	THUMB_FUNC_START sub_080FA268
sub_080FA268: @ 0x080FA268
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	add r0, r4, #0
	bl sub_080FA330
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080FA2DA
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080FA2DA
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r5, _080FA2B8  @ =gRam
	ldr r2, _080FA2BC  @ =0x00000FB2
	add r1, r5, r2
	add r1, r4, r1
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080C5044
	ldr r1, _080FA2C0  @ =0x000009AC
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #26
	bne _080FA2C4
	add r0, r4, #0
	bl sub_080FA1D8
	b _080FA2DA
	.byte 0x00
	.byte 0x00
_080FA2B8:
	.4byte gRam
_080FA2BC:
	.4byte 0x00000FB2
_080FA2C0:
	.4byte 0x000009AC
_080FA2C4:
	ldr r1, _080FA2E0  @ =gUnknown_0817A3AC
	ldr r2, _080FA2E4  @ =0x00000F52
	add r0, r5, r2
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r6, #0
	bl _call_via_r1
_080FA2DA:
	pop {r4-r6}
	pop {r0}
	bx r0
_080FA2E0:
	.4byte gUnknown_0817A3AC
_080FA2E4:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FA268

