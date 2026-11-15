	THUMB_FUNC_START sub_0809CA38
sub_0809CA38: @ 0x0809CA38
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r5, _0809CB20  @ =gRam
	ldr r0, _0809CB24  @ =0x000009B2
	add r6, r5, r0
	mov r0, #0
	ldrsb r0, [r6, r0]
	cmp r0, #0
	bne _0809CA50
	bl sub_0808B1FC
_0809CA50:
	ldr r1, _0809CB28  @ =0x00001702
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0809CA5C
	b _0809CB6C
_0809CA5C:
	mov r6, #4
	add r4, r5, #0
	ldr r2, _0809CB2C  @ =0x00000E15
	add r3, r4, r2
	mov r2, #0
_0809CA66:
	add r1, r6, r3
	ldrb r0, [r1]
	cmp r0, #42
	beq _0809CA72
	cmp r0, #43
	bne _0809CA74
_0809CA72:
	strb r2, [r1]
_0809CA74:
	sub r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r0, #0
	bge _0809CA66
	ldr r1, _0809CB30  @ =0x000016C9
	add r0, r4, r1
	mov r2, #0
	strb r2, [r0]
	ldr r0, _0809CB34  @ =0x00001705
	add r3, r4, r0
	ldrb r1, [r3]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r3]
	ldr r1, _0809CB38  @ =0x000016EB
	add r6, r4, r1
	strb r2, [r6]
	sub r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	sub r1, r1, #2
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #189
	add r0, r4, r1
	mov r5, #0
	strh r2, [r0]
	ldr r2, _0809CB3C  @ =0x000017A8
	add r0, r4, r2
	strb r5, [r0]
	sub r1, r1, #141
	add r0, r4, r1
	strb r5, [r0]
	add r2, r2, #73
	add r3, r4, r2
	ldrb r0, [r3]
	cmp r0, #0
	beq _0809CB58
	ldr r0, _0809CB40  @ =0x00001710
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	beq _0809CAE4
	add r1, r1, #85
	add r0, r4, r1
	mov r1, #32
	strb r1, [r0]
	ldr r1, _0809CB44  @ =0x0000180D
	add r0, r4, r1
	strb r5, [r0]
	strb r5, [r2]
	strb r5, [r3]
_0809CAE4:
	bl sub_08092BF4
	ldr r2, _0809CB44  @ =0x0000180D
	add r1, r4, r2
	mov r0, #1
	strb r0, [r1]
	ldr r1, _0809CB48  @ =0x00001789
	add r0, r4, r1
	strb r5, [r0]
	mov r0, #2
	strb r0, [r6]
	ldr r2, _0809CB4C  @ =0x000016D4
	add r0, r4, r2
	strb r5, [r0]
	ldr r0, _0809CB50  @ =0x00001727
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	strb r0, [r2]
	mov r0, #17
	bl sub_0809E49C
	ldr r2, _0809CB54  @ =0x00001718
	add r1, r4, r2
	mov r0, #7
	strb r0, [r1]
	bl sub_08098D20
	b _0809CDF4
_0809CB20:
	.4byte gRam
_0809CB24:
	.4byte 0x000009B2
_0809CB28:
	.4byte 0x00001702
_0809CB2C:
	.4byte 0x00000E15
_0809CB30:
	.4byte 0x000016C9
_0809CB34:
	.4byte 0x00001705
_0809CB38:
	.4byte 0x000016EB
_0809CB3C:
	.4byte 0x000017A8
_0809CB40:
	.4byte 0x00001710
_0809CB44:
	.4byte 0x0000180D
_0809CB48:
	.4byte 0x00001789
_0809CB4C:
	.4byte 0x000016D4
_0809CB50:
	.4byte 0x00001727
_0809CB54:
	.4byte 0x00001718
_0809CB58:
	ldr r0, _0809CB68  @ =0x00001718
	add r1, r4, r0
	mov r0, #2
	strb r0, [r1]
	bl sub_08099C90
	b _0809CDF4
	.byte 0x00
	.byte 0x00
_0809CB68:
	.4byte 0x00001718
_0809CB6C:
	ldr r1, _0809CB80  @ =0x000016F8
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809CB84
	mov r0, #0
	bl sub_08099D98
	b _0809CC96
	.byte 0x00
	.byte 0x00
_0809CB80:
	.4byte 0x000016F8
_0809CB84:
	ldr r2, _0809CBE0  @ =0x000017A8
	add r0, r5, r2
	ldrb r0, [r0]
	mov r4, #1
	and r4, r4, r0
	cmp r4, #0
	beq _0809CC14
	bl sub_0809C6DC
	bl sub_080943CC
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _0809CBAA
	bl sub_0809380C
	bl sub_08094460
_0809CBAA:
	ldr r0, _0809CBE4  @ =0x00001727
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #15
	and r0, r0, r1
	strb r0, [r2]
	bl sub_0809380C
	bl sub_0809C7EC
	bl sub_080978AC
	bl sub_0809407C
	mov r0, #0
	ldrsb r0, [r6, r0]
	cmp r0, #0
	beq _0809CBF0
	ldr r1, _0809CBE8  @ =0x0000172C
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809CBEC
	bl sub_0809B0DC
	b _0809CBF0
	.byte 0x00
	.byte 0x00
_0809CBE0:
	.4byte 0x000017A8
_0809CBE4:
	.4byte 0x00001727
_0809CBE8:
	.4byte 0x0000172C
_0809CBEC:
	bl sub_0809B2AC
_0809CBF0:
	ldr r1, _0809CC08  @ =gRam
	ldr r2, _0809CC0C  @ =0x00001718
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #3
	beq _0809CC58
	ldr r0, _0809CC10  @ =0x000017A8
	add r1, r1, r0
	mov r0, #0
	strb r0, [r1]
	b _0809CDF4
	.byte 0x00
	.byte 0x00
_0809CC08:
	.4byte gRam
_0809CC0C:
	.4byte 0x00001718
_0809CC10:
	.4byte 0x000017A8
_0809CC14:
	ldr r1, _0809CC48  @ =0x00001727
	add r0, r5, r1
	strb r4, [r0]
	bl sub_080975B4
	bl sub_0809407C
	ldr r2, _0809CC4C  @ =0x00001718
	add r1, r5, r2
	mov r0, #3
	strb r0, [r1]
	ldr r1, _0809CC50  @ =0x0000178B
	add r0, r5, r1
	strb r4, [r0]
	mov r0, #0
	ldrsb r0, [r6, r0]
	cmp r0, #0
	beq _0809CC58
	add r2, r2, #20
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809CC54
	bl sub_0809B0DC
	b _0809CC58
_0809CC48:
	.4byte 0x00001727
_0809CC4C:
	.4byte 0x00001718
_0809CC50:
	.4byte 0x0000178B
_0809CC54:
	bl sub_0809B2AC
_0809CC58:
	ldr r2, _0809CD5C  @ =gRam
	ldr r0, _0809CD60  @ =0x000017A8
	add r5, r2, r0
	ldrb r4, [r5]
	mov r3, #128
	add r0, r3, #0
	and r0, r0, r4
	cmp r0, #0
	beq _0809CC96
	ldr r1, _0809CD64  @ =0x00000547
	add r0, r2, r1
	ldrb r1, [r0]
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0809CC96
	ldr r1, _0809CD68  @ =0x000017A6
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r1
	ldr r2, _0809CD6C  @ =0xFFFFFDFF
	add r0, r0, r2
	lsl r0, r0, #16
	ldr r1, _0809CD70  @ =0x09FE0000
	cmp r0, r1
	bhi _0809CC96
	mov r0, #64
	orr r0, r0, r4
	strb r0, [r5]
_0809CC96:
	ldr r5, _0809CD5C  @ =gRam
	ldr r0, _0809CD74  @ =0x000016EB
	add r7, r5, r0
	ldrb r0, [r7]
	sub r0, r0, #1
	strb r0, [r7]
	lsl r0, r0, #24
	cmp r0, #0
	blt _0809CCAA
	b _0809CDF4
_0809CCAA:
	ldr r1, _0809CD68  @ =0x000017A6
	add r4, r5, r1
	mov r2, #128
	lsl r2, r2, #1
	add r0, r2, #0
	ldrh r1, [r4]
	add r0, r0, r1
	mov r2, #0
	mov r8, r2
	strh r0, [r4]
	mov r6, #255
	lsl r6, r6, #8
	and r0, r0, r6
	mov r1, #128
	lsl r1, r1, #2
	cmp r0, r1
	bne _0809CCD2
	mov r0, #5
	bl sub_0809E49C
_0809CCD2:
	ldrh r0, [r4]
	add r1, r6, #0
	and r1, r1, r0
	mov r0, #192
	lsl r0, r0, #4
	cmp r1, r0
	bne _0809CDA4
	ldr r0, _0809CD78  @ =0x00001705
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
	mov r1, r8
	strb r1, [r7]
	ldr r2, _0809CD7C  @ =0x000016EA
	add r0, r5, r2
	strb r1, [r0]
	mov r0, #0
	strh r0, [r4]
	ldr r1, _0809CD80  @ =0x00001718
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #30
	beq _0809CD0C
	sub r2, r2, #2
	add r0, r5, r2
	mov r1, r8
	strb r1, [r0]
_0809CD0C:
	ldr r4, _0809CD5C  @ =gRam
	ldr r2, _0809CD60  @ =0x000017A8
	add r5, r4, r2
	ldrb r1, [r5]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _0809CD84
	mov r0, #9
	bl sub_080A3B64
	lsl r0, r0, #24
	cmp r0, #0
	beq _0809CD84
	ldr r0, _0809CD7C  @ =0x000016EA
	add r1, r4, r0
	mov r0, #144
	strb r0, [r1]
	ldr r2, _0809CD68  @ =0x000017A6
	add r1, r4, r2
	mov r0, #192
	lsl r0, r0, #2
	strh r0, [r1]
	ldr r0, _0809CD80  @ =0x00001718
	add r1, r4, r0
	mov r0, #3
	strb r0, [r1]
	ldrb r1, [r5]
	mov r0, #1
	orr r0, r0, r1
	mov r1, #64
	eor r0, r0, r1
	strb r0, [r5]
	mov r0, #5
	bl sub_0809E49C
	bl sub_080C19B4
	b _0809CDA4
	.byte 0x00
	.byte 0x00
_0809CD5C:
	.4byte gRam
_0809CD60:
	.4byte 0x000017A8
_0809CD64:
	.4byte 0x00000547
_0809CD68:
	.4byte 0x000017A6
_0809CD6C:
	.4byte 0xFFFFFDFF
_0809CD70:
	.4byte 0x09FE0000
_0809CD74:
	.4byte 0x000016EB
_0809CD78:
	.4byte 0x00001705
_0809CD7C:
	.4byte 0x000016EA
_0809CD80:
	.4byte 0x00001718
_0809CD84:
	ldr r0, _0809CD98  @ =gRam
	ldr r2, _0809CD9C  @ =0x000017A8
	add r1, r0, r2
	mov r2, #0
	strb r2, [r1]
	ldr r1, _0809CDA0  @ =0x00001718
	add r0, r0, r1
	strb r2, [r0]
	b _0809CDF4
	.byte 0x00
	.byte 0x00
_0809CD98:
	.4byte gRam
_0809CD9C:
	.4byte 0x000017A8
_0809CDA0:
	.4byte 0x00001718
_0809CDA4:
	ldr r2, _0809CE00  @ =gRam
	ldr r0, _0809CE04  @ =0x000017A6
	add r5, r2, r0
	ldrh r3, [r5]
	add r0, r0, #3
	add r1, r2, r0
	lsr r0, r3, #8
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r4, #255
	lsl r4, r4, #8
	add r1, r4, #0
	and r1, r1, r3
	ldr r0, _0809CE08  @ =gUnknown_08168040
	add r0, r6, r0
	ldrb r0, [r0]
	add r0, r0, r1
	strh r0, [r5]
	ldr r1, _0809CE0C  @ =gUnknown_0816807C
	lsl r0, r0, #16
	lsr r0, r0, #24
	add r0, r0, r1
	ldrb r0, [r0]
	ldr r1, _0809CE10  @ =0x000016EB
	add r2, r2, r1
	strb r0, [r2]
	mov r0, #8
	bl sub_0809EEB4
	ldrh r0, [r5]
	and r4, r4, r0
	mov r0, #160
	lsl r0, r0, #3
	cmp r4, r0
	bne _0809CDF4
	mov r0, #9
	bl sub_0809EEB4
_0809CDF4:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809CE00:
	.4byte gRam
_0809CE04:
	.4byte 0x000017A6
_0809CE08:
	.4byte gUnknown_08168040
_0809CE0C:
	.4byte gUnknown_0816807C
_0809CE10:
	.4byte 0x000016EB
	THUMB_FUNC_END sub_0809CA38

