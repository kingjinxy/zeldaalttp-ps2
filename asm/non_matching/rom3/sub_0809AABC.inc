	THUMB_FUNC_START sub_0809AABC
sub_0809AABC: @ 0x0809AABC
	push {r4-r6,lr}
	bl sub_080A3EE0
	ldr r2, _0809AB54  @ =gRam
	ldr r1, _0809AB58  @ =0x000016C4
	add r0, r2, r1
	ldrh r1, [r0]
	ldr r3, _0809AB5C  @ =0x00001608
	add r0, r2, r3
	strh r1, [r0]
	mov r5, #182
	lsl r5, r5, #5
	add r0, r2, r5
	ldrh r1, [r0]
	add r3, r3, #4
	add r0, r2, r3
	strh r1, [r0]
	ldr r5, _0809AB60  @ =0x000009AD
	add r0, r2, r5
	ldrb r0, [r0]
	cmp r0, #7
	bne _0809AAF2
	mov r0, #184
	lsl r0, r0, #5
	add r1, r2, r0
	mov r0, #0
	strb r0, [r1]
_0809AAF2:
	ldr r1, _0809AB64  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0809AB16
	ldr r3, _0809AB68  @ =0x00001715
	add r1, r2, r3
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #10
	bne _0809AB16
	mov r0, #6
	strb r0, [r1]
_0809AB16:
	ldr r4, _0809AB54  @ =gRam
	ldr r5, _0809AB6C  @ =0x00001727
	add r0, r4, r5
	mov r1, #4
	strb r1, [r0]
	bl sub_080975B4
	mov r0, #182
	lsl r0, r0, #5
	add r1, r4, r0
	mov r2, #0
	ldrsh r0, [r1, r2]
	cmp r0, #0
	bge _0809AB74
	ldr r3, _0809AB70  @ =0x00001708
	add r2, r4, r3
	mov r5, #0
	ldrsh r0, [r2, r5]
	mov r3, #128
	lsl r3, r3, #8
	and r0, r0, r3
	cmp r0, #0
	bne _0809AB74
	mov r0, #0
	ldrsh r1, [r1, r0]
	ldrh r0, [r2]
	sub r0, r0, r1
	and r0, r0, r3
	cmp r0, #0
	bne _0809AB8E
	b _0809AD60
_0809AB54:
	.4byte gRam
_0809AB58:
	.4byte 0x000016C4
_0809AB5C:
	.4byte 0x00001608
_0809AB60:
	.4byte 0x000009AD
_0809AB64:
	.4byte 0x00000996
_0809AB68:
	.4byte 0x00001715
_0809AB6C:
	.4byte 0x00001727
_0809AB70:
	.4byte 0x00001708
_0809AB74:
	ldr r0, _0809AC00  @ =gRam
	ldr r2, _0809AC04  @ =0x00001708
	add r1, r0, r2
	mov r3, #182
	lsl r3, r3, #5
	add r0, r0, r3
	mov r5, #0
	ldrsh r1, [r1, r5]
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r1, r0
	blt _0809AB8E
	b _0809AD60
_0809AB8E:
	ldr r3, _0809AC00  @ =gRam
	ldr r5, _0809AC04  @ =0x00001708
	add r0, r3, r5
	ldrh r1, [r0]
	mov r2, #182
	lsl r2, r2, #5
	add r0, r3, r2
	mov r4, #0
	mov r2, #0
	strh r1, [r0]
	sub r5, r5, #52
	add r0, r3, r5
	strb r4, [r0]
	ldr r1, _0809AC08  @ =0x00001712
	add r0, r3, r1
	strb r4, [r0]
	add r5, r5, #65
	add r0, r3, r5
	strb r4, [r0]
	add r1, r1, #4
	add r0, r3, r1
	strb r4, [r0]
	add r5, r5, #4
	add r0, r3, r5
	strb r4, [r0]
	ldr r1, _0809AC0C  @ =0x000009E8
	add r0, r3, r1
	strh r2, [r0]
	ldr r2, _0809AC10  @ =0x000009AD
	add r0, r3, r2
	strb r4, [r0]
	add r5, r5, #244
	add r0, r3, r5
	strb r4, [r0]
	ldr r0, _0809AC14  @ =0x00001663
	add r2, r3, r0
	ldrb r1, [r2]
	cmp r1, #0
	beq _0809AC28
	cmp r1, #3
	beq _0809AC28
	sub r5, r5, #134
	add r0, r3, r5
	strb r4, [r0]
	cmp r1, #13
	bne _0809AC24
	strb r4, [r2]
	ldr r1, _0809AC18  @ =0x00000B5C
	add r0, r3, r1
	strb r4, [r0]
	ldr r2, _0809AC1C  @ =0x00000B5D
	add r0, r3, r2
	strb r4, [r0]
	ldr r5, _0809AC20  @ =0x0000166A
	add r0, r3, r5
	strb r4, [r0]
	b _0809AC28
_0809AC00:
	.4byte gRam
_0809AC04:
	.4byte 0x00001708
_0809AC08:
	.4byte 0x00001712
_0809AC0C:
	.4byte 0x000009E8
_0809AC10:
	.4byte 0x000009AD
_0809AC14:
	.4byte 0x00001663
_0809AC18:
	.4byte 0x00000B5C
_0809AC1C:
	.4byte 0x00000B5D
_0809AC20:
	.4byte 0x0000166A
_0809AC24:
	bl sub_08114600
_0809AC28:
	mov r0, #0
	bl sub_0809EEB4
	ldr r0, _0809AC48  @ =gRam
	ldr r1, _0809AC4C  @ =0x000017EA
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0809AC50
	mov r0, #14
	bl sub_0809E43C
	b _0809AC56
	.byte 0x00
	.byte 0x00
_0809AC48:
	.4byte gRam
_0809AC4C:
	.4byte 0x000017EA
_0809AC50:
	mov r0, #13
	bl sub_0809E43C
_0809AC56:
	bl sub_0809EDA4
	ldr r2, _0809AD08  @ =gRam
	ldr r3, _0809AD0C  @ =0x000009E5
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #2
	bne _0809AC7C
	ldr r5, _0809AD10  @ =0x000017DC
	add r0, r2, r5
	ldrh r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	beq _0809AC7C
	ldr r0, _0809AD14  @ =0x000017AE
	add r1, r2, r0
	mov r0, #3
	strb r0, [r1]
_0809AC7C:
	ldr r6, _0809AD08  @ =gRam
	ldr r1, _0809AD18  @ =0x000017D0
	add r0, r6, r1
	ldrh r1, [r0]
	mov r2, #15
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #15
	bne _0809AD3C
	ldr r2, _0809AD1C  @ =0x000017D4
	add r0, r6, r2
	mov r4, #0
	mov r5, #1
	strb r5, [r0]
	ldr r3, _0809AD20  @ =0x000016CC
	add r0, r6, r3
	ldrb r1, [r0]
	sub r2, r2, #6
	add r0, r6, r2
	strb r1, [r0]
	add r3, r3, #132
	add r0, r6, r3
	strb r4, [r0]
	ldr r1, _0809AD24  @ =0x000017DF
	add r0, r6, r1
	strb r4, [r0]
	sub r2, r2, #24
	add r0, r6, r2
	strb r4, [r0]
	bl sub_08092B0C
	mov r3, #161
	lsl r3, r3, #4
	add r0, r6, r3
	strb r5, [r0]
	mov r0, #0
	mov r1, #21
	bl sub_080AD1EC
	ldr r5, _0809AD28  @ =0x00001718
	add r1, r6, r5
	mov r0, #4
	strb r0, [r1]
	ldr r0, _0809AD2C  @ =0x0000176E
	add r1, r6, r0
	mov r0, #32
	strb r0, [r1]
	ldr r1, _0809AD30  @ =0x0000180D
	add r0, r6, r1
	strb r4, [r0]
	ldr r2, _0809AD34  @ =0x00001710
	add r0, r6, r2
	strb r4, [r0]
	ldr r3, _0809AD38  @ =0x000017F1
	add r0, r6, r3
	strb r4, [r0]
	add r5, r5, #121
	add r0, r6, r5
	strb r4, [r0]
	sub r1, r1, #123
	add r0, r6, r1
	strb r4, [r0]
	add r2, r2, #248
	add r0, r6, r2
	strb r4, [r0]
	sub r3, r3, #216
	add r0, r6, r3
	strb r4, [r0]
	b _0809AD60
	.byte 0x00
	.byte 0x00
_0809AD08:
	.4byte gRam
_0809AD0C:
	.4byte 0x000009E5
_0809AD10:
	.4byte 0x000017DC
_0809AD14:
	.4byte 0x000017AE
_0809AD18:
	.4byte 0x000017D0
_0809AD1C:
	.4byte 0x000017D4
_0809AD20:
	.4byte 0x000016CC
_0809AD24:
	.4byte 0x000017DF
_0809AD28:
	.4byte 0x00001718
_0809AD2C:
	.4byte 0x0000176E
_0809AD30:
	.4byte 0x0000180D
_0809AD34:
	.4byte 0x00001710
_0809AD38:
	.4byte 0x000017F1
_0809AD3C:
	ldr r5, _0809AD50  @ =0x00001714
	add r0, r6, r5
	ldrb r0, [r0]
	and r2, r2, r0
	cmp r2, #0
	bne _0809AD58
	ldr r1, _0809AD54  @ =0x00001718
	add r0, r6, r1
	strb r2, [r0]
	b _0809AD60
_0809AD50:
	.4byte 0x00001714
_0809AD54:
	.4byte 0x00001718
_0809AD58:
	ldr r2, _0809AD68  @ =0x00001718
	add r1, r6, r2
	mov r0, #1
	strb r0, [r1]
_0809AD60:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809AD68:
	.4byte 0x00001718
	THUMB_FUNC_END sub_0809AABC

