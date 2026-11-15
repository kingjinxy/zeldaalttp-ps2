	THUMB_FUNC_START sub_08121CCC
sub_08121CCC: @ 0x08121CCC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r1, #4
	ldr r4, _08121D64  @ =gRam
	ldr r0, _08121D68  @ =0x00000E15
	add r2, r4, r0
_08121CE0:
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #34
	bne _08121CEA
	b _08122046
_08121CEA:
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _08121CE0
	add r1, r4, #0
	ldr r2, _08121D6C  @ =0x000009AD
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _08121D02
	b _08122046
_08121D02:
	ldr r3, _08121D70  @ =0x00000996
	add r0, r1, r3
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _08121D18
	add r0, r7, #0
	mov r1, #29
	bl sub_080C19F8
_08121D18:
	ldr r1, _08121D74  @ =0x00001844
	add r0, r4, r1
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08121DFE
	ldr r2, _08121D78  @ =0x000016EA
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #9
	beq _08121D80
	ldr r3, _08121D7C  @ =0x00001789
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _08121D80
	sub r1, r1, #216
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08121D5C
	add r2, r2, #24
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _08121D5C
	add r3, r3, #1
	add r0, r4, r3
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08121D5C
	b _08122046
_08121D5C:
	add r0, r7, #0
	bl sub_08122128
	b _0812204C
_08121D64:
	.4byte gRam
_08121D68:
	.4byte 0x00000E15
_08121D6C:
	.4byte 0x000009AD
_08121D70:
	.4byte 0x00000996
_08121D74:
	.4byte 0x00001844
_08121D78:
	.4byte 0x000016EA
_08121D7C:
	.4byte 0x00001789
_08121D80:
	ldr r2, _08121F70  @ =gRam
	ldr r4, _08121F74  @ =0x00001865
	add r0, r2, r4
	add r0, r7, r0
	ldrb r1, [r0]
	mov r0, #182
	lsl r0, r0, #5
	add r3, r2, r0
	ldr r0, _08121F78  @ =gUnknown_0818038C
	lsr r1, r1, #1
	lsl r1, r1, #1
	add r0, r1, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r0, r0, #8
	ldrh r3, [r3]
	add r0, r0, r3
	mov r3, #150
	lsl r3, r3, #4
	add r4, r2, r3
	strh r0, [r4]
	ldr r0, _08121F7C  @ =0x000016C4
	add r3, r2, r0
	ldr r0, _08121F80  @ =gUnknown_0818039C
	add r1, r1, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	ldrh r3, [r3]
	add r0, r0, r3
	ldr r1, _08121F84  @ =0x00000964
	add r3, r2, r1
	strh r0, [r3]
	ldr r1, _08121F88  @ =0x00000DC5
	add r0, r2, r1
	add r0, r7, r0
	ldrb r1, [r4]
	strb r1, [r0]
	ldr r4, _08121F8C  @ =0x00000DD9
	add r0, r2, r4
	add r0, r7, r0
	ldr r4, _08121F90  @ =0x00000961
	add r1, r2, r4
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _08121F94  @ =0x00000DCF
	add r0, r2, r1
	add r0, r7, r0
	ldrb r1, [r3]
	strb r1, [r0]
	ldr r3, _08121F98  @ =0x00000DE3
	add r0, r2, r3
	add r0, r7, r0
	add r4, r4, #4
	add r1, r2, r4
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _08121F9C  @ =0x00001844
	add r2, r2, r0
	add r2, r7, r2
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
_08121DFE:
	ldr r4, _08121F70  @ =gRam
	ldr r1, _08121FA0  @ =0x00001827
	add r0, r4, r1
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08121E60
	ldr r2, _08121FA4  @ =0x00000996
	add r0, r4, r2
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _08121E20
	add r0, r7, #0
	bl sub_08122390
_08121E20:
	ldr r3, _08121F94  @ =0x00000DCF
	add r0, r4, r3
	add r0, r7, r0
	ldrb r1, [r0]
	ldr r2, _08121F98  @ =0x00000DE3
	add r0, r4, r2
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #8
	asr r1, r1, #3
	ldr r3, _08121F84  @ =0x00000964
	add r0, r4, r3
	strh r1, [r0]
	ldr r1, _08121F88  @ =0x00000DC5
	add r0, r4, r1
	add r0, r7, r0
	ldrb r1, [r0]
	sub r2, r2, #10
	add r0, r4, r2
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #8
	sub r3, r3, #4
	add r0, r4, r3
	strh r1, [r0]
	mov r0, #0
	bl sub_080A0534
_08121E60:
	ldr r2, _08121F70  @ =gRam
	ldr r4, _08121FA8  @ =0x00000E29
	add r0, r2, r4
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08121EE2
	ldr r1, _08121FAC  @ =0x00001813
	add r0, r2, r1
	add r1, r7, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _08121E7E
	add r0, r0, #1
	strb r0, [r1]
_08121E7E:
	ldr r3, _08121FB0  @ =0x0000181D
	add r1, r2, r3
	add r4, r7, r1
	mov r8, r4
	mov r0, #182
	lsl r0, r0, #5
	add r5, r2, r0
	ldrb r0, [r5]
	strb r0, [r4]
	add r4, r7, #1
	add r4, r4, r1
	ldr r1, _08121FB4  @ =0x000016C1
	add r6, r2, r1
	ldrb r0, [r6]
	strb r0, [r4]
	ldrh r0, [r5]
	add r0, r0, #8
	strh r0, [r5]
	add r3, r3, #62
	add r0, r2, r3
	add r0, r7, r0
	ldrb r1, [r0]
	add r0, r7, #0
	str r2, [sp]
	bl sub_080BF584
	add r0, r7, #0
	bl sub_08121C0C
	ldr r2, [sp]
	ldr r1, _08121FB8  @ =0x00000DED
	add r0, r2, r1
	add r0, r7, r0
	mov r3, #150
	lsl r3, r3, #4
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _08121FBC  @ =0x00000DF7
	add r0, r2, r1
	add r0, r7, r0
	add r3, r3, #1
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	mov r1, r8
	ldrb r0, [r1]
	strb r0, [r5]
	ldrb r0, [r4]
	strb r0, [r6]
_08121EE2:
	ldr r4, _08121F70  @ =gRam
	ldr r2, _08121FB8  @ =0x00000DED
	add r0, r4, r2
	add r2, r7, r0
	ldrb r1, [r2]
	cmp r1, #0
	beq _08121EFC
	ldr r3, _08121FAC  @ =0x00001813
	add r0, r4, r3
	add r0, r7, r0
	ldrb r0, [r0]
	add r0, r1, r0
	strb r0, [r2]
_08121EFC:
	add r0, r7, #0
	bl sub_080BF774
	ldr r1, _08121FBC  @ =0x00000DF7
	add r0, r4, r1
	add r2, r7, r0
	ldrb r1, [r2]
	cmp r1, #0
	beq _08121F1A
	ldr r3, _08121FAC  @ =0x00001813
	add r0, r4, r3
	add r0, r7, r0
	ldrb r0, [r0]
	add r0, r1, r0
	strb r0, [r2]
_08121F1A:
	add r0, r7, #0
	bl sub_080C1768
	add r0, r7, #0
	mov r1, #0
	bl sub_080C09FC
	lsl r0, r0, #24
	lsr r0, r0, #24
	neg r1, r0
	orr r1, r1, r0
	lsr r1, r1, #31
	ldr r2, _08121FA8  @ =0x00000E29
	add r0, r4, r2
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0812201C
	cmp r1, #1
	beq _08122000
	add r0, r7, #0
	mov r1, #0
	bl sub_080BFA64
	lsl r0, r0, #24
	cmp r0, #0
	beq _08121FC4
	add r0, r7, #0
	bl sub_080AC100
	mov r1, #9
	ldr r3, _08121FC0  @ =0x0000187A
	add r0, r4, r3
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #240
	beq _08121F66
	mov r1, #113
_08121F66:
	add r0, r7, #0
	bl sub_080C19F8
	b _08122000
	.byte 0x00
	.byte 0x00
_08121F70:
	.4byte gRam
_08121F74:
	.4byte 0x00001865
_08121F78:
	.4byte gUnknown_0818038C
_08121F7C:
	.4byte 0x000016C4
_08121F80:
	.4byte gUnknown_0818039C
_08121F84:
	.4byte 0x00000964
_08121F88:
	.4byte 0x00000DC5
_08121F8C:
	.4byte 0x00000DD9
_08121F90:
	.4byte 0x00000961
_08121F94:
	.4byte 0x00000DCF
_08121F98:
	.4byte 0x00000DE3
_08121F9C:
	.4byte 0x00001844
_08121FA0:
	.4byte 0x00001827
_08121FA4:
	.4byte 0x00000996
_08121FA8:
	.4byte 0x00000E29
_08121FAC:
	.4byte 0x00001813
_08121FB0:
	.4byte 0x0000181D
_08121FB4:
	.4byte 0x000016C1
_08121FB8:
	.4byte 0x00000DED
_08121FBC:
	.4byte 0x00000DF7
_08121FC0:
	.4byte 0x0000187A
_08121FC4:
	add r0, r7, #0
	bl sub_08121B2C
	lsl r0, r0, #24
	cmp r0, #0
	bne _08122000
	ldr r0, _08121FF8  @ =0x00000E1F
	add r1, r4, r0
	add r1, r7, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	beq _08122000
	cmp r0, #4
	bhi _08122046
	ldr r2, _08121FFC  @ =0x00001813
	add r1, r4, r2
	add r1, r7, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	b _08122046
	.byte 0x00
	.byte 0x00
_08121FF8:
	.4byte 0x00000E1F
_08121FFC:
	.4byte 0x00001813
_08122000:
	ldr r0, _08122014  @ =gRam
	ldr r3, _08122018  @ =0x00000E29
	add r0, r0, r3
	add r0, r7, r0
	ldrb r1, [r0]
	mov r2, #1
	eor r1, r1, r2
	strb r1, [r0]
	b _08122046
	.byte 0x00
	.byte 0x00
_08122014:
	.4byte gRam
_08122018:
	.4byte 0x00000E29
_0812201C:
	ldr r0, _08122058  @ =0x00000A74
	add r5, r4, r0
	add r5, r7, r5
	ldrb r1, [r5]
	mov r8, r1
	ldr r2, _0812205C  @ =0x00000E47
	add r4, r4, r2
	add r4, r7, r4
	ldrb r6, [r4]
	mov r0, #0
	strb r0, [r4]
	add r0, r7, #0
	mov r1, #0
	bl sub_080BFA64
	strb r6, [r4]
	mov r3, r8
	strb r3, [r5]
	add r0, r7, #0
	bl sub_08122060
_08122046:
	add r0, r7, #0
	bl sub_0812218C
_0812204C:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08122058:
	.4byte 0x00000A74
_0812205C:
	.4byte 0x00000E47
	THUMB_FUNC_END sub_08121CCC

