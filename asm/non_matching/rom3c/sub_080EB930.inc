	THUMB_FUNC_START sub_080EB930
sub_080EB930: @ 0x080EB930
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080EB9A8  @ =gRam
	ldr r1, _080EB9AC  @ =0x00000FC2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r1, [r6]
	cmp r1, #0
	beq _080EB9D8
	ldr r2, _080EB9B0  @ =0x00000F62
	add r0, r5, r2
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080EB968
	mov r0, #11
	strb r0, [r2]
	ldr r0, _080EB9B4  @ =0x00001052
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080EB968:
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C6F48
	ldr r1, _080EB9B8  @ =0x00001042
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080EB9C4
	ldr r2, _080EB9BC  @ =0x00000F92
	add r3, r5, r2
	add r3, r4, r3
	ldr r2, _080EB9C0  @ =gUnknown_081780A9
	sub r1, r1, #144
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, r2
	ldr r2, _080EB9B4  @ =0x00001052
	add r0, r5, r2
	add r0, r4, r0
	ldrb r2, [r0]
	mov r0, #1
	and r0, r0, r2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r0, [r3]
	b _080EB9E4
	.byte 0x00
	.byte 0x00
_080EB9A8:
	.4byte gRam
_080EB9AC:
	.4byte 0x00000FC2
_080EB9B0:
	.4byte 0x00000F62
_080EB9B4:
	.4byte 0x00001052
_080EB9B8:
	.4byte 0x00001042
_080EB9BC:
	.4byte 0x00000F92
_080EB9C0:
	.4byte gUnknown_081780A9
_080EB9C4:
	mov r0, #16
	strb r0, [r6]
	ldr r1, _080EB9D4  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	b _080EB9E2
	.byte 0x00
	.byte 0x00
_080EB9D4:
	.4byte 0x00000F52
_080EB9D8:
	mov r0, #16
	strb r0, [r6]
	ldr r2, _080EB9EC  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
_080EB9E2:
	strb r1, [r0]
_080EB9E4:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EB9EC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080EB930

