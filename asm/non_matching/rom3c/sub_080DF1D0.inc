	THUMB_FUNC_START sub_080DF1D0
sub_080DF1D0: @ 0x080DF1D0
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080DF248  @ =gRam
	ldr r1, _080DF24C  @ =0x000010E2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	bne _080DF23E
	ldr r1, _080DF250  @ =0x000009AC
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #26
	beq _080DF23E
	ldr r2, _080DF254  @ =gUnknown_08176500
	ldr r0, _080DF258  @ =gMoonPearl
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r1, [r0]
	add r0, r4, #0
	mov r2, sp
	bl sub_080C94F4
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DF23E
	ldr r0, _080DF25C  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	mvn r0, r0
	strb r0, [r1]
	ldr r0, _080DF260  @ =0x00000F12
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	mvn r0, r0
	strb r0, [r1]
	ldr r1, _080DF264  @ =0x00001062
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080DF23A
	add r0, r4, #0
	mov r1, #121
	bl sub_080CF140
_080DF23A:
	mov r0, #64
	strb r0, [r6]
_080DF23E:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DF248:
	.4byte gRam
_080DF24C:
	.4byte 0x000010E2
_080DF250:
	.4byte 0x000009AC
_080DF254:
	.4byte gUnknown_08176500
_080DF258:
	.4byte gMoonPearl
_080DF25C:
	.4byte 0x00000F22
_080DF260:
	.4byte 0x00000F12
_080DF264:
	.4byte 0x00001062
	THUMB_FUNC_END sub_080DF1D0

