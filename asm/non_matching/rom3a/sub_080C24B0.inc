	THUMB_FUNC_START sub_080C24B0
sub_080C24B0: @ 0x080C24B0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r5, r2, #0
	ldr r3, _080C24D4  @ =gRam
	ldr r1, _080C24D8  @ =0x00000D84
	add r0, r3, r1
	add r0, r2, r0
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _080C24DC
	add r0, r2, #0
	bl sub_080ED8EC
	b _080C2518
	.byte 0x00
	.byte 0x00
_080C24D4:
	.4byte gRam
_080C24D8:
	.4byte 0x00000D84
_080C24DC:
	ldr r1, _080C2520  @ =0x00000FC2
	add r0, r3, r1
	add r4, r2, r0
	ldr r1, _080C2524  @ =0x000010C2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	mov r1, #15
	cmp r0, #0
	beq _080C24F6
	mov r1, #31
_080C24F6:
	strb r1, [r4]
	ldr r0, _080C2528  @ =0x00001012
	add r1, r3, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #4
	strb r0, [r1]
	ldr r1, _080C252C  @ =0x000015F9
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #11
	bne _080C2518
	ldr r1, _080C2530  @ =0x000011B2
	add r0, r3, r1
	add r0, r5, r0
	mov r1, #1
	strb r1, [r0]
_080C2518:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C2520:
	.4byte 0x00000FC2
_080C2524:
	.4byte 0x000010C2
_080C2528:
	.4byte 0x00001012
_080C252C:
	.4byte 0x000015F9
_080C2530:
	.4byte 0x000011B2
	THUMB_FUNC_END sub_080C24B0

