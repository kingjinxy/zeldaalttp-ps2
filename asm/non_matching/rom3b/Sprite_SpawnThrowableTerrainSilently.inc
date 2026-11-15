	THUMB_FUNC_START Sprite_SpawnThrowableTerrainSilently
Sprite_SpawnThrowableTerrainSilently: @ 0x080C3928
	push {r4,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	mov r4, #15
	ldr r2, _080C394C  @ =gRam
_080C3932:
	ldr r3, _080C3950  @ =0x00000FA2
	add r0, r2, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C3954
	lsl r4, r4, #24
	lsr r0, r4, #24
	bl sub_080C297C
	asr r4, r4, #24
	add r0, r4, #0
	b _080C395E
_080C394C:
	.4byte gRam
_080C3950:
	.4byte 0x00000FA2
_080C3954:
	sub r4, r4, #1
	cmp r4, #0
	bge _080C3932
	mov r0, #1
	neg r0, r0
_080C395E:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END Sprite_SpawnThrowableTerrainSilently

