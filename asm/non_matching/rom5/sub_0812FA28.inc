	THUMB_FUNC_START sub_0812FA28
sub_0812FA28: @ 0x0812FA28
	push {r4-r7,lr}
	ldr r4, _0812FA78  @ =gRam
	ldr r1, _0812FA7C  @ =0x00000CA2
	add r0, r4, r1
	ldrb r5, [r0]
	cmp r5, #0
	bne _0812FA38
	b _0812FB6C
_0812FA38:
	ldr r0, _0812FA80  @ =gUnknown_0822BB4E
	sub r1, r5, #1
	add r0, r1, r0
	ldrb r2, [r0]
	mov r0, #128
	and r0, r0, r2
	add r7, r1, #0
	cmp r0, #0
	bne _0812FAAA
	ldr r3, _0812FA84  @ =0x00000CA9
	add r1, r4, r3
	strb r2, [r1]
	cmp r5, #1
	bne _0812FA8C
	mov r0, #10
	strb r0, [r1]
	mov r0, #202
	lsl r0, r0, #4
	add r2, r4, r0
	ldrb r0, [r2]
	mov r3, #128
	lsl r3, r3, #2
	add r1, r3, #0
	add r0, r0, r1
	strh r0, [r2]
	bl sub_08133244
	ldr r1, _0812FA88  @ =0x0000099B
	add r0, r4, r1
	strb r5, [r0]
	b _0812FAAA
	.byte 0x00
	.byte 0x00
_0812FA78:
	.4byte gRam
_0812FA7C:
	.4byte 0x00000CA2
_0812FA80:
	.4byte gUnknown_0822BB4E
_0812FA84:
	.4byte 0x00000CA9
_0812FA88:
	.4byte 0x0000099B
_0812FA8C:
	mov r3, #202
	lsl r3, r3, #4
	add r2, r4, r3
	ldrb r0, [r2]
	mov r3, #128
	lsl r3, r3, #2
	add r1, r3, #0
	add r0, r0, r1
	strh r0, [r2]
	bl sub_081331F4
	ldr r0, _0812FB28  @ =0x0000099B
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
_0812FAAA:
	mov r4, #68
	ldr r2, _0812FB2C  @ =gRam
	mov r1, #151
	lsl r1, r1, #4
	add r0, r2, r1
	mov r6, #0
	strh r6, [r0]
	ldr r0, _0812FB30  @ =0x00000CA2
	add r3, r2, r0
	ldrh r0, [r3]
	add r0, r0, #1
	strh r0, [r3]
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0812FAE6
	strh r6, [r3]
	cmp r5, #18
	beq _0812FAE6
	ldr r3, _0812FB34  @ =0x00000971
	add r1, r2, r3
	mov r0, #3
	strb r0, [r1]
	mov r4, #70
	cmp r5, #2
	bne _0812FAE6
	mov r1, #162
	lsl r1, r1, #4
	add r0, r2, r1
	strh r6, [r0]
_0812FAE6:
	ldr r3, _0812FB38  @ =0x00000A24
	add r5, r2, r3
	strh r4, [r5]
	ldr r0, _0812FB3C  @ =gUnknown_0822BB3A
	add r0, r7, r0
	ldrb r4, [r0]
	cmp r4, #1
	bne _0812FAFC
	ldr r1, _0812FB40  @ =0x00000C9C
	add r0, r2, r1
	ldrb r4, [r0]
_0812FAFC:
	ldr r1, _0812FB44  @ =gUnknown_0822B324
	lsl r0, r4, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r4, _0812FB48  @ =gUnknown_02032000
	add r1, r4, #0
	bl LZ77UnCompWram
	ldrh r0, [r5]
	cmp r0, #68
	bne _0812FB58
	ldr r1, _0812FB4C  @ =0x06011000
	add r0, r4, #0
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812FB50  @ =gUnknown_02032200
	ldr r1, _0812FB54  @ =0x06011400
	mov r2, #128
	bl CpuFastSet
	b _0812FB6C
_0812FB28:
	.4byte 0x0000099B
_0812FB2C:
	.4byte gRam
_0812FB30:
	.4byte 0x00000CA2
_0812FB34:
	.4byte 0x00000971
_0812FB38:
	.4byte 0x00000A24
_0812FB3C:
	.4byte gUnknown_0822BB3A
_0812FB40:
	.4byte 0x00000C9C
_0812FB44:
	.4byte gUnknown_0822B324
_0812FB48:
	.4byte gUnknown_02032000
_0812FB4C:
	.4byte 0x06011000
_0812FB50:
	.4byte gUnknown_02032200
_0812FB54:
	.4byte 0x06011400
_0812FB58:
	ldr r0, _0812FB74  @ =gUnknown_02032400
	ldr r1, _0812FB78  @ =0x06011800
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812FB7C  @ =gUnknown_02032600
	ldr r1, _0812FB80  @ =0x06011C00
	mov r2, #128
	bl CpuFastSet
_0812FB6C:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812FB74:
	.4byte gUnknown_02032400
_0812FB78:
	.4byte 0x06011800
_0812FB7C:
	.4byte gUnknown_02032600
_0812FB80:
	.4byte 0x06011C00
	THUMB_FUNC_END sub_0812FA28

