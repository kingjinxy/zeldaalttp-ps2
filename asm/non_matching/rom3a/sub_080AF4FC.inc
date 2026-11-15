	THUMB_FUNC_START sub_080AF4FC
sub_080AF4FC: @ 0x080AF4FC
	push {r4,lr}
	ldr r2, _080AF538  @ =gRam
	ldr r3, _080AF53C  @ =0x00001AE8
	add r1, r2, r3
	strh r0, [r1]
	ldr r4, _080AF540  @ =0x000009AC
	add r3, r2, r4
	ldrb r0, [r3]
	cmp r0, #14
	beq _080AF532
	ldr r0, _080AF544  @ =0x00000A72
	add r1, r2, r0
	mov r0, #0
	strh r0, [r1]
	ldr r4, _080AF548  @ =0x00001AD0
	add r1, r2, r4
	strb r0, [r1]
	ldr r0, _080AF54C  @ =0x000009AD
	add r1, r2, r0
	mov r0, #2
	strb r0, [r1]
	ldrb r1, [r3]
	ldr r4, _080AF550  @ =0x00000A1A
	add r0, r2, r4
	strh r1, [r0]
	mov r0, #14
	strb r0, [r3]
_080AF532:
	pop {r4}
	pop {r0}
	bx r0
_080AF538:
	.4byte gRam
_080AF53C:
	.4byte 0x00001AE8
_080AF540:
	.4byte 0x000009AC
_080AF544:
	.4byte 0x00000A72
_080AF548:
	.4byte 0x00001AD0
_080AF54C:
	.4byte 0x000009AD
_080AF550:
	.4byte 0x00000A1A
	THUMB_FUNC_END sub_080AF4FC

