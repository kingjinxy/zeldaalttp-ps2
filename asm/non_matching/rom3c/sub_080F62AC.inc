	THUMB_FUNC_START sub_080F62AC
sub_080F62AC: @ 0x080F62AC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _080F630C  @ =gRam
	ldr r2, _080F6310  @ =0x00001610
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080F62D6
	ldr r2, _080F6314  @ =0x00000F52
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F62D0
	mov r0, #4
	bl sub_080CF388
_080F62D0:
	add r0, r4, #0
	bl sub_080F631C
_080F62D6:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F6306
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F6306
	ldr r1, _080F6318  @ =gUnknown_081799A8
	ldr r0, _080F630C  @ =gRam
	ldr r2, _080F6314  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080F6306:
	pop {r4}
	pop {r0}
	bx r0
_080F630C:
	.4byte gRam
_080F6310:
	.4byte 0x00001610
_080F6314:
	.4byte 0x00000F52
_080F6318:
	.4byte gUnknown_081799A8
	THUMB_FUNC_END sub_080F62AC

