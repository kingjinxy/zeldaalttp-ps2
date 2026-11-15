	THUMB_FUNC_START sub_080BFFFC
sub_080BFFFC: @ 0x080BFFFC
	push {r4-r7,lr}
	add r7, r1, #0
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080C00B8  @ =gRam
	ldr r1, _080C00BC  @ =0x00000E3D
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r7]
	ldr r2, _080C00C0  @ =0x00000DC5
	add r0, r6, r2
	add r0, r5, r0
	ldrb r3, [r0]
	ldr r0, _080C00C4  @ =gUnknown_08171C20
	ldrb r2, [r7]
	add r0, r2, r0
	ldrb r0, [r0]
	add r3, r3, r0
	sub r1, r1, #100
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	ldr r1, _080C00C8  @ =gUnknown_08171C24
	add r2, r2, r1
	ldrb r1, [r2]
	add r0, r0, r1
	lsl r0, r0, #8
	add r3, r3, r0
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r6
	mov r12, r2
	strh r3, [r2]
	ldr r1, _080C00CC  @ =0x00000DCF
	add r0, r6, r1
	add r0, r5, r0
	ldrb r4, [r0]
	ldr r0, _080C00D0  @ =gUnknown_08171C28
	ldrb r2, [r7]
	add r0, r2, r0
	ldrb r0, [r0]
	add r4, r4, r0
	add r1, r1, #20
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	ldr r1, _080C00D4  @ =gUnknown_08171C2C
	add r2, r2, r1
	ldrb r1, [r2]
	add r0, r0, r1
	lsl r0, r0, #8
	add r4, r4, r0
	ldr r2, _080C00D8  @ =0x00000964
	add r1, r6, r2
	strh r4, [r1]
	sub r2, r2, #12
	add r0, r6, r2
	ldrh r0, [r0]
	sub r3, r3, r0
	lsl r3, r3, #16
	lsr r3, r3, #16
	cmp r3, #223
	bhi _080C0160
	ldr r3, _080C00DC  @ =0x00000952
	add r0, r6, r3
	ldrh r0, [r0]
	sub r0, r4, r0
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #255
	bhi _080C0160
	ldr r2, _080C00E0  @ =0x000009B2
	add r0, r6, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080C00E4
	lsl r0, r4, #16
	asr r0, r0, #19
	strh r0, [r1]
	mov r3, #0
	ldrsh r0, [r1, r3]
	lsl r0, r0, #3
	mov r2, r12
	mov r3, #0
	ldrsh r1, [r2, r3]
	bl sub_080691D8
	lsl r0, r0, #16
	lsr r2, r0, #16
	b _080C00F6
	.byte 0x00
	.byte 0x00
_080C00B8:
	.4byte gRam
_080C00BC:
	.4byte 0x00000E3D
_080C00C0:
	.4byte 0x00000DC5
_080C00C4:
	.4byte gUnknown_08171C20
_080C00C8:
	.4byte gUnknown_08171C24
_080C00CC:
	.4byte 0x00000DCF
_080C00D0:
	.4byte gUnknown_08171C28
_080C00D4:
	.4byte gUnknown_08171C2C
_080C00D8:
	.4byte 0x00000964
_080C00DC:
	.4byte 0x00000952
_080C00E0:
	.4byte 0x000009B2
_080C00E4:
	ldr r1, _080C0134  @ =0x00000E47
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	add r0, r5, #0
	bl sub_080C781C
	lsl r0, r0, #24
	lsr r2, r0, #24
_080C00F6:
	ldr r1, _080C0138  @ =gRam
	ldr r3, _080C013C  @ =0x0000187A
	add r0, r1, r3
	add r0, r5, r0
	strb r2, [r0]
	add r3, r1, #0
	cmp r2, #3
	bne _080C0118
	mov r1, #195
	lsl r1, r1, #5
	add r0, r3, r1
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r7]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080C0160
_080C0118:
	strb r2, [r7]
	ldr r1, _080C0140  @ =gUnknown_08171B20
	ldrb r0, [r7]
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C0160
	cmp r0, #2
	bne _080C0144
	bl sub_080C7948
	lsl r0, r0, #24
	lsr r0, r0, #24
	b _080C0184
_080C0134:
	.4byte 0x00000E47
_080C0138:
	.4byte gRam
_080C013C:
	.4byte 0x0000187A
_080C0140:
	.4byte gUnknown_08171B20
_080C0144:
	cmp r0, #4
	bne _080C0168
	mov r2, #195
	lsl r2, r2, #5
	add r0, r3, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C017E
	ldr r1, _080C0164  @ =0x00000A74
	add r0, r3, r1
	add r0, r5, r0
	mov r1, #1
	strb r1, [r0]
_080C0160:
	mov r0, #0
	b _080C0184
_080C0164:
	.4byte 0x00000A74
_080C0168:
	cmp r0, #3
	bne _080C017E
	mov r2, #195
	lsl r2, r2, #5
	add r0, r3, r2
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r7]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080C0160
_080C017E:
	mov r0, #0
	strb r0, [r7]
	mov r0, #1
_080C0184:
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080BFFFC

	.byte 0x00
	.byte 0x00
