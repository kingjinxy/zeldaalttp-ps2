	THUMB_FUNC_START sub_0810DD44
sub_0810DD44: @ 0x0810DD44
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r10, r5
	ldr r0, _0810DDE4  @ =gRam
	mov r8, r0
	ldr r1, _0810DDE8  @ =0x00000F92
	add r1, r1, r8
	add r1, r5, r1
	ldr r2, _0810DDEC  @ =gUnknown_0817CF3A
	ldr r4, _0810DDF0  @ =0x00000F62
	add r4, r4, r8
	add r4, r5, r4
	ldrb r0, [r4]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r2, _0810DDF4  @ =0x00001122
	add r2, r2, r8
	add r2, r5, r2
	ldrb r0, [r2]
	mov r1, #63
	and r1, r1, r0
	ldr r3, _0810DDF8  @ =gUnknown_0817CF42
	ldrb r0, [r4]
	add r0, r0, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r2]
	add r0, r5, #0
	bl sub_080C6240
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #0
	bne _0810DE76
	ldr r0, _0810DDFC  @ =0x00001062
	add r0, r0, r8
	add r0, r0, r5
	mov r9, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810DE10
	ldr r0, _0810DE00  @ =0x00001012
	add r0, r0, r8
	add r0, r5, r0
	strb r7, [r0]
	add r0, r5, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810DE76
	add r0, r5, #0
	bl sub_080C5044
	add r0, r5, #0
	bl Sprite3_Move
	add r0, r5, #0
	bl sub_080C79F8
	ldr r0, _0810DE04  @ =0x00000F52
	add r0, r0, r8
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0810DE08
	add r0, r5, #0
	bl sub_0810DF78
	b _0810DE76
	.byte 0x00
	.byte 0x00
_0810DDE4:
	.4byte gRam
_0810DDE8:
	.4byte 0x00000F92
_0810DDEC:
	.4byte gUnknown_0817CF3A
_0810DDF0:
	.4byte 0x00000F62
_0810DDF4:
	.4byte 0x00001122
_0810DDF8:
	.4byte gUnknown_0817CF42
_0810DDFC:
	.4byte 0x00001062
_0810DE00:
	.4byte 0x00001012
_0810DE04:
	.4byte 0x00000F52
_0810DE08:
	add r0, r5, #0
	bl sub_0810DE94
	b _0810DE76
_0810DE10:
	ldr r0, _0810DE84  @ =gUnknown_03003E74
	ldrh r1, [r0]
	lsl r1, r1, #3
	mov r0, #170
	lsl r0, r0, #3
	add r0, r0, r8
	add r1, r1, r0
	ldrb r2, [r1, #5]
	mov r0, #13
	neg r0, r0
	and r0, r0, r2
	strb r0, [r1, #5]
	ldr r0, _0810DE88  @ =0x00001142
	add r0, r0, r8
	add r6, r5, r0
	ldrb r4, [r6]
	add r0, r5, #0
	bl sub_080C2C4C
	ldr r0, _0810DE8C  @ =0x00001152
	add r0, r0, r8
	add r1, r5, r0
	ldrb r3, [r1]
	add r0, r3, #0
	add r0, r0, #64
	mov r2, #128
	and r0, r0, r2
	cmp r0, #0
	bne _0810DE4E
	sub r0, r3, #2
	strb r0, [r1]
_0810DE4E:
	ldrb r3, [r6]
	eor r4, r4, r3
	and r4, r4, r2
	cmp r4, #0
	beq _0810DE76
	mov r0, #128
	and r0, r0, r3
	cmp r0, #0
	beq _0810DE76
	strb r7, [r6]
	strb r7, [r1]
	mov r1, r9
	strb r7, [r1]
	ldr r0, _0810DE90  @ =0x00001032
	add r0, r0, r8
	add r0, r0, r10
	ldrb r2, [r0]
	mov r1, #239
	and r1, r1, r2
	strb r1, [r0]
_0810DE76:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0810DE84:
	.4byte gUnknown_03003E74
_0810DE88:
	.4byte 0x00001142
_0810DE8C:
	.4byte 0x00001152
_0810DE90:
	.4byte 0x00001032
	THUMB_FUNC_END sub_0810DD44

