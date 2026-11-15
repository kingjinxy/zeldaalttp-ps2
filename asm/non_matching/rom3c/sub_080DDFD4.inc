	THUMB_FUNC_START sub_080DDFD4
sub_080DDFD4: @ 0x080DDFD4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r5, _080DE044  @ =gRam
	ldr r0, _080DE048  @ =0x00000F92
	add r2, r5, r0
	add r2, r4, r2
	ldr r1, _080DE04C  @ =0x00000996
	add r0, r5, r1
	ldrb r0, [r0]
	lsr r0, r0, #1
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r2, _080DE050  @ =0x00001142
	add r0, r5, r2
	add r3, r4, r0
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080DE00C
	mov r0, #0
	strb r0, [r3]
_080DE00C:
	ldr r1, _080DE054  @ =0x00001152
	add r0, r5, r1
	add r2, r4, r0
	ldr r4, _080DE058  @ =gUnknown_081763B0
	mov r1, #0
	ldrb r0, [r3]
	cmp r0, #3
	bls _080DE01E
	mov r1, #1
_080DE01E:
	add r0, r1, r4
	ldrb r0, [r0]
	ldrb r1, [r2]
	add r0, r0, r1
	strb r0, [r2]
	ldr r1, _080DE05C  @ =gUnknown_081763B4
	ldr r2, _080DE060  @ =0x00000F52
	add r0, r5, r2
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r6, #0
	bl _call_via_r1
	pop {r4-r6}
	pop {r0}
	bx r0
_080DE044:
	.4byte gRam
_080DE048:
	.4byte 0x00000F92
_080DE04C:
	.4byte 0x00000996
_080DE050:
	.4byte 0x00001142
_080DE054:
	.4byte 0x00001152
_080DE058:
	.4byte gUnknown_081763B0
_080DE05C:
	.4byte gUnknown_081763B4
_080DE060:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DDFD4

