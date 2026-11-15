	THUMB_FUNC_START sub_080DBE8C
sub_080DBE8C: @ 0x080DBE8C
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080DC058
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DBF68
	add r0, r4, #0
	bl sub_080C5080
	ldr r0, _080DBEC0  @ =gRam
	ldr r1, _080DBEC4  @ =0x00000996
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #47
	bls _080DBEC8
	lsr r1, r1, #31
	b _080DBECA
_080DBEC0:
	.4byte gRam
_080DBEC4:
	.4byte 0x00000996
_080DBEC8:
	mov r1, #2
_080DBECA:
	ldr r2, _080DBEEC  @ =gRam
	ldr r3, _080DBEF0  @ =0x00000F92
	add r0, r2, r3
	add r6, r4, r0
	strb r1, [r6]
	ldr r1, _080DBEF4  @ =0x00000F52
	add r0, r2, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _080DBEF8
	add r0, r4, #0
	mov r1, #166
	mov r2, sp
	bl sub_080C9164
	b _080DBF58
_080DBEEC:
	.4byte gRam
_080DBEF0:
	.4byte 0x00000F92
_080DBEF4:
	.4byte 0x00000F52
_080DBEF8:
	ldr r0, _080DBF34  @ =gFlute
	ldrb r0, [r0]
	cmp r0, #1
	bls _080DBF5E
	ldr r3, _080DBF38  @ =0x00000A4E
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #15
	bne _080DBF28
	ldr r1, _080DBF3C  @ =0x00000545
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _080DBF28
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DBF40
_080DBF28:
	add r0, r4, #0
	mov r1, #167
	mov r2, sp
	bl sub_080C9164
	b _080DBF68
_080DBF34:
	.4byte gFlute
_080DBF38:
	.4byte 0x00000A4E
_080DBF3C:
	.4byte 0x00000545
_080DBF40:
	mov r0, #46
	mov r1, #0
	bl sub_0812A324
	add r0, r4, #0
	mov r1, #165
	mov r2, sp
	bl sub_080C9564
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
_080DBF58:
	mov r0, #2
	strb r0, [r6]
	b _080DBF68
_080DBF5E:
	add r0, r4, #0
	mov r1, #164
	mov r2, sp
	bl sub_080C9164
_080DBF68:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080DBE8C

