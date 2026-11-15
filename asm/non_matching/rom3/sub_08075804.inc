	THUMB_FUNC_START sub_08075804
sub_08075804: @ 0x08075804
	push {r4-r6,lr}
	bl sub_08075AB4
	bl sub_08070918
	ldr r4, _080758B0  @ =gRam
	ldr r0, _080758B4  @ =0x00000AA8
	add r2, r4, r0
	ldrh r1, [r2]
	mov r3, #128
	lsl r3, r3, #8
	add r0, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	bl sub_08070064
	mov r2, #12
	ldr r1, _080758B8  @ =0x000009DA
	add r0, r4, r1
	ldr r3, _080758BC  @ =gUnknown_0814DB0C
	ldrh r1, [r0]
_0807582E:
	sub r2, r2, #1
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r1, r0
	bne _0807582E
	ldr r0, _080758C0  @ =gUnknown_0814DB18
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r3, _080758B8  @ =0x000009DA
	add r0, r4, r3
	mov r5, #0
	mov r6, #0
	strh r1, [r0]
	cmp r1, #32
	bne _080758EC
	ldr r0, _080758C4  @ =0x0000165E
	add r1, r4, r0
	mov r0, #3
	strb r0, [r1]
	ldr r2, _080758C8  @ =gUnknown_02002282
	ldrb r0, [r2]
	mov r1, #32
	orr r0, r0, r1
	strb r0, [r2]
	ldr r1, _080758CC  @ =0x0000165C
	add r2, r4, r1
	ldrh r0, [r2]
	mov r1, #64
	eor r0, r0, r1
	strh r0, [r2]
	bl sub_08074A44
	bl sub_080AB73C
	ldr r2, _080758D0  @ =0x0000180D
	add r0, r4, r2
	strb r5, [r0]
	ldr r3, _080758D4  @ =0x000016EA
	add r0, r4, r3
	strb r5, [r0]
	ldr r1, _080758D8  @ =0x000016E8
	add r0, r4, r1
	strb r5, [r0]
	add r2, r2, #120
	add r0, r4, r2
	strb r5, [r0]
	add r3, r3, #134
	add r1, r4, r3
	mov r0, #1
	strb r0, [r1]
	ldr r0, _080758DC  @ =0x00000A1A
	add r1, r4, r0
	mov r0, #8
	strh r0, [r1]
	ldr r2, _080758E0  @ =0x000009AC
	add r1, r4, r2
	mov r0, #21
	strb r0, [r1]
	ldr r3, _080758E4  @ =0x000009AD
	add r0, r4, r3
	strb r5, [r0]
	ldr r1, _080758E8  @ =0x000009E8
	add r0, r4, r1
	strh r6, [r0]
	b _08075964
_080758B0:
	.4byte gRam
_080758B4:
	.4byte 0x00000AA8
_080758B8:
	.4byte 0x000009DA
_080758BC:
	.4byte gUnknown_0814DB0C
_080758C0:
	.4byte gUnknown_0814DB18
_080758C4:
	.4byte 0x0000165E
_080758C8:
	.4byte gUnknown_02002282
_080758CC:
	.4byte 0x0000165C
_080758D0:
	.4byte 0x0000180D
_080758D4:
	.4byte 0x000016EA
_080758D8:
	.4byte 0x000016E8
_080758DC:
	.4byte 0x00000A1A
_080758E0:
	.4byte 0x000009AC
_080758E4:
	.4byte 0x000009AD
_080758E8:
	.4byte 0x000009E8
_080758EC:
	cmp r1, #13
	bne _0807591C
	ldr r2, _08075910  @ =0x000009AC
	add r1, r4, r2
	mov r0, #24
	strb r0, [r1]
	ldr r3, _08075914  @ =0x000009AD
	add r0, r4, r3
	strb r5, [r0]
	ldr r1, _08075918  @ =0x00000A4C
	add r0, r4, r1
	strh r6, [r0]
	add r2, r2, #40
	add r1, r4, r2
	mov r0, #32
	strb r0, [r1]
	b _08075964
	.byte 0x00
	.byte 0x00
_08075910:
	.4byte 0x000009AC
_08075914:
	.4byte 0x000009AD
_08075918:
	.4byte 0x00000A4C
_0807591C:
	cmp r2, #2
	ble _08075944
	ldr r3, _08075938  @ =0x00000A3C
	add r0, r4, r3
	ldr r1, _0807593C  @ =0x0000FFF1
	strh r1, [r0]
	ldr r2, _08075940  @ =0x00000A42
	add r0, r4, r2
	strh r1, [r0]
	sub r3, r3, #144
	add r1, r4, r3
	mov r0, #22
	b _0807594A
	.byte 0x00
	.byte 0x00
_08075938:
	.4byte 0x00000A3C
_0807593C:
	.4byte 0x0000FFF1
_08075940:
	.4byte 0x00000A42
_08075944:
	ldr r0, _0807596C  @ =0x000009AC
	add r1, r4, r0
	mov r0, #19
_0807594A:
	strb r0, [r1]
	ldr r2, _08075970  @ =0x00000A1A
	add r1, r4, r2
	mov r2, #0
	mov r3, #0
	mov r0, #8
	strh r0, [r1]
	ldr r1, _08075974  @ =0x000009AD
	add r0, r4, r1
	strb r2, [r0]
	ldr r2, _08075978  @ =0x000009E8
	add r0, r4, r2
	strh r3, [r0]
_08075964:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807596C:
	.4byte 0x000009AC
_08075970:
	.4byte 0x00000A1A
_08075974:
	.4byte 0x000009AD
_08075978:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08075804

