	THUMB_FUNC_START sub_0809AD6C
sub_0809AD6C: @ 0x0809AD6C
	push {r4-r7,lr}
	ldr r1, _0809AD9C  @ =gRam
	ldr r0, _0809ADA0  @ =0x00001727
	add r2, r1, r0
	mov r0, #0
	strb r0, [r2]
	ldr r2, _0809ADA4  @ =0x0000178B
	add r0, r1, r2
	ldrb r0, [r0]
	add r2, r1, #0
	cmp r0, #0
	beq _0809ADAC
	ldr r0, _0809ADA8  @ =0x0000174F
	add r3, r2, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #32
	bne _0809ADAC
	mov r0, #31
	strb r0, [r3]
	b _0809ADFA
_0809AD9C:
	.4byte gRam
_0809ADA0:
	.4byte 0x00001727
_0809ADA4:
	.4byte 0x0000178B
_0809ADA8:
	.4byte 0x0000174F
_0809ADAC:
	ldr r1, _0809AE24  @ =0x00001804
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809ADDE
	ldr r3, _0809AE28  @ =0x00001806
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _0809AE1E
	ldr r1, _0809AE2C  @ =0x00000545
	add r0, r2, r1
	ldrb r0, [r0]
	mov r1, #15
	and r1, r1, r0
	cmp r1, #0
	beq _0809ADFA
	ldr r3, _0809AE30  @ =0x00001727
	add r0, r2, r3
	ldrb r0, [r0]
	and r1, r1, r0
	cmp r1, #0
	bne _0809ADFA
	bl sub_08093078
_0809ADDE:
	ldr r2, _0809AE34  @ =gRam
	ldr r1, _0809AE38  @ =0x00001702
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #1
	beq _0809ADFA
	ldr r3, _0809AE2C  @ =0x00000545
	add r0, r2, r3
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	ldr r3, _0809AE30  @ =0x00001727
	add r1, r2, r3
	strb r0, [r1]
_0809ADFA:
	mov r5, #4
	mov r0, #4
	bl sub_0809EEB4
	ldr r4, _0809AE34  @ =gRam
	ldr r0, _0809AE3C  @ =0x00001714
	add r6, r4, r0
	ldrb r1, [r6]
	mov r7, #1
	add r0, r7, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0809AEC4
	ldr r1, _0809AE24  @ =0x00001804
	add r0, r4, r1
	ldrb r5, [r0]
	cmp r5, #0
	beq _0809AE40
_0809AE1E:
	bl sub_08098E1C
	b _0809B0C8
_0809AE24:
	.4byte 0x00001804
_0809AE28:
	.4byte 0x00001806
_0809AE2C:
	.4byte 0x00000545
_0809AE30:
	.4byte 0x00001727
_0809AE34:
	.4byte gRam
_0809AE38:
	.4byte 0x00001702
_0809AE3C:
	.4byte 0x00001714
_0809AE40:
	ldr r2, _0809AE94  @ =0x00001719
	add r0, r4, r2
	strb r5, [r0]
	bl sub_08093078
	ldr r3, _0809AE98  @ =0x000016E8
	add r0, r4, r3
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _0809AE64
	ldr r0, _0809AE9C  @ =0x00001705
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
_0809AE64:
	ldr r1, _0809AEA0  @ =0x00001716
	add r0, r4, r1
	strb r5, [r0]
	mov r5, #0
	ldr r2, _0809AEA4  @ =0x0000176C
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809AE82
	mov r5, #23
	ldr r0, _0809AEA8  @ =gMoonPearl
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809AE82
	mov r5, #28
_0809AE82:
	ldr r0, _0809AEAC  @ =gRam
	ldr r3, _0809AEB0  @ =0x00001718
	add r0, r0, r3
	strb r5, [r0]
	cmp r5, #23
	bne _0809AEB4
	bl sub_08098950
	b _0809B0C8
_0809AE94:
	.4byte 0x00001719
_0809AE98:
	.4byte 0x000016E8
_0809AE9C:
	.4byte 0x00001705
_0809AEA0:
	.4byte 0x00001716
_0809AEA4:
	.4byte 0x0000176C
_0809AEA8:
	.4byte gMoonPearl
_0809AEAC:
	.4byte gRam
_0809AEB0:
	.4byte 0x00001718
_0809AEB4:
	cmp r5, #28
	bne _0809AEBE
	bl sub_08098B24
	b _0809B0C8
_0809AEBE:
	bl sub_0809D5CC
	b _0809B0C8
_0809AEC4:
	bl sub_0809EDA4
	ldr r0, _0809AF24  @ =0x00001719
	add r3, r4, r0
	mov r2, #0
	strb r5, [r3]
	ldrb r0, [r6]
	mov r1, #15
	and r1, r1, r0
	cmp r1, #0
	bne _0809AF44
	ldr r2, _0809AF28  @ =0x00001716
	add r0, r4, r2
	strb r1, [r0]
	strb r1, [r3]
	mov r5, #0
	ldr r3, _0809AF2C  @ =0x0000176C
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809AEFA
	mov r5, #23
	ldr r0, _0809AF30  @ =gMoonPearl
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809AEFA
	mov r5, #28
_0809AEFA:
	ldr r4, _0809AF34  @ =gRam
	ldr r1, _0809AF38  @ =0x00001718
	add r0, r4, r1
	strb r5, [r0]
	bl sub_08093078
	ldr r2, _0809AF3C  @ =0x000016E8
	add r0, r4, r2
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0809AF16
	b _0809B0C8
_0809AF16:
	ldr r3, _0809AF40  @ =0x00001705
	add r2, r4, r3
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
	b _0809B0C8
_0809AF24:
	.4byte 0x00001719
_0809AF28:
	.4byte 0x00001716
_0809AF2C:
	.4byte 0x0000176C
_0809AF30:
	.4byte gMoonPearl
_0809AF34:
	.4byte gRam
_0809AF38:
	.4byte 0x00001718
_0809AF3C:
	.4byte 0x000016E8
_0809AF40:
	.4byte 0x00001705
_0809AF44:
	cmp r1, #15
	bne _0809AFF4
	ldr r0, _0809AF58  @ =0x00001716
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #2
	bne _0809AF5C
	bl sub_0809A87C
	b _0809B0C8
_0809AF58:
	.4byte 0x00001716
_0809AF5C:
	ldr r0, _0809AFC4  @ =gMoonPearl
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809AF7C
	ldr r3, _0809AFC8  @ =0x0000188E
	add r0, r4, r3
	strb r2, [r0]
	ldr r3, _0809AFCC  @ =0x00001711
	add r0, r4, r3
	strb r2, [r0]
	add r3, r3, #91
	add r0, r4, r3
	strb r2, [r0]
	ldr r3, _0809AFD0  @ =0x0000188C
	add r0, r4, r3
	strh r2, [r0]
_0809AF7C:
	ldr r3, _0809AFD4  @ =0x00001727
	add r0, r4, r3
	strb r2, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r0, r4, r3
	strb r2, [r0]
	mov r0, #2
	strb r0, [r1]
	ldr r1, _0809AFD8  @ =0x0000180D
	add r0, r4, r1
	strb r7, [r0]
	ldr r3, _0809AFDC  @ =0x000016E8
	add r0, r4, r3
	strb r2, [r0]
	ldr r1, _0809AFE0  @ =0x000016EA
	add r0, r4, r1
	strb r2, [r0]
	add r3, r3, #162
	add r0, r4, r3
	strb r2, [r0]
	ldr r1, _0809AFE4  @ =0x0000180C
	add r0, r4, r1
	strb r2, [r0]
	sub r3, r3, #146
	add r0, r4, r3
	strb r2, [r0]
	ldr r1, _0809AFE8  @ =0x00001702
	add r0, r4, r1
	strb r2, [r0]
	mov r0, #6
	bl sub_0809E49C
	bl sub_0809A87C
	b _0809B0C8
_0809AFC4:
	.4byte gMoonPearl
_0809AFC8:
	.4byte 0x0000188E
_0809AFCC:
	.4byte 0x00001711
_0809AFD0:
	.4byte 0x0000188C
_0809AFD4:
	.4byte 0x00001727
_0809AFD8:
	.4byte 0x0000180D
_0809AFDC:
	.4byte 0x000016E8
_0809AFE0:
	.4byte 0x000016EA
_0809AFE4:
	.4byte 0x0000180C
_0809AFE8:
	.4byte 0x00001702
_0809AFEC:
	add r0, r3, #4
	lsl r0, r0, #24
	lsr r3, r0, #24
	b _0809B02E
_0809AFF4:
	mov r3, #3
	add r2, r4, #0
	ldr r6, _0809B058  @ =gUnknown_08167FB2
	add r4, r1, #0
	ldr r5, _0809B05C  @ =gUnknown_08167FBA
_0809AFFE:
	add r0, r3, r5
	ldrb r0, [r0]
	cmp r4, r0
	beq _0809AFEC
	sub r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r0, #0
	bge _0809AFFE
	mov r3, #3
	ldr r1, _0809B060  @ =0x00001714
	add r0, r2, r1
	ldrb r1, [r0]
	mov r2, #1
_0809B01A:
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	bne _0809B02E
	lsr r1, r1, #1
	sub r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r0, #0
	bge _0809B01A
_0809B02E:
	ldr r1, _0809B064  @ =gRam
	ldr r2, _0809B068  @ =0x0000174E
	add r4, r1, r2
	strb r3, [r4]
	ldr r0, _0809B06C  @ =0x00001727
	add r5, r1, r0
	add r0, r3, r6
	ldrb r2, [r5]
	ldrb r0, [r0]
	and r0, r0, r2
	cmp r0, #0
	beq _0809B078
	ldr r3, _0809B070  @ =0x000016CC
	add r0, r1, r3
	strb r2, [r0]
	ldr r0, _0809B074  @ =0x00001719
	add r1, r1, r0
	mov r0, #6
	strb r0, [r1]
	b _0809B092
	.byte 0x00
	.byte 0x00
_0809B058:
	.4byte gUnknown_08167FB2
_0809B05C:
	.4byte gUnknown_08167FBA
_0809B060:
	.4byte 0x00001714
_0809B064:
	.4byte gRam
_0809B068:
	.4byte 0x0000174E
_0809B06C:
	.4byte 0x00001727
_0809B070:
	.4byte 0x000016CC
_0809B074:
	.4byte 0x00001719
_0809B078:
	mov r3, #150
	lsl r3, r3, #4
	add r0, r1, r3
	strb r2, [r0]
	ldrb r3, [r4]
	ldr r0, _0809B0D0  @ =gUnknown_08167FAA
	add r0, r3, r0
	ldrb r0, [r0]
	orr r0, r0, r2
	strb r0, [r5]
	lsl r0, r2, #24
	cmp r0, #0
	beq _0809B096
_0809B092:
	bl sub_08096F30
_0809B096:
	bl sub_080943CC
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _0809B0AA
	bl sub_0809380C
	bl sub_08094460
_0809B0AA:
	ldr r0, _0809B0D4  @ =gRam
	ldr r1, _0809B0D8  @ =0x00001727
	add r0, r0, r1
	ldrb r2, [r0]
	mov r1, #15
	and r1, r1, r2
	strb r1, [r0]
	bl sub_0809380C
	bl sub_080975B4
	bl sub_0809407C
	bl sub_0809B2AC
_0809B0C8:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809B0D0:
	.4byte gUnknown_08167FAA
_0809B0D4:
	.4byte gRam
_0809B0D8:
	.4byte 0x00001727
	THUMB_FUNC_END sub_0809AD6C

