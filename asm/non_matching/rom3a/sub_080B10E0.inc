	THUMB_FUNC_START sub_080B10E0
sub_080B10E0: @ 0x080B10E0
	push {r4-r7,lr}
	sub sp, sp, #4
	ldr r5, _080B1140  @ =gRam
	ldr r0, _080B1144  @ =0x00000E15
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080B1100
	ldr r0, _080B1148  @ =gUnknown_0816E8FC
	ldrb r1, [r1]
	sub r1, r1, #1
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	bl _call_via_r0
_080B1100:
	add r4, r5, #0
	ldr r1, _080B114C  @ =0x000009EC
	add r6, r4, r1
	ldrb r7, [r6]
	cmp r7, #0
	beq _080B1154
	sub r1, r1, #4
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #1
	bhi _080B1126
	ldr r0, _080B1150  @ =0x000009AD
	add r4, r4, r0
	ldrb r5, [r4]
	bl sub_081295CC
	bl sub_08129698
	strb r5, [r4]
_080B1126:
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #40
	bhi _080B1136
	b _080B1282
_080B1136:
	mov r0, #0
	bl sub_080B128C
	b _080B1282
	.byte 0x00
	.byte 0x00
_080B1140:
	.4byte gRam
_080B1144:
	.4byte 0x00000E15
_080B1148:
	.4byte gUnknown_0816E8FC
_080B114C:
	.4byte 0x000009EC
_080B1150:
	.4byte 0x000009AD
_080B1154:
	bl sub_080B165C
	ldr r1, _080B11A8  @ =0x00000534
	add r0, r4, r1
	ldrh r1, [r0]
	mov r3, #4
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080B1190
	ldr r0, _080B11AC  @ =0x00000A02
	add r1, r4, r0
	ldrb r2, [r1]
	sub r0, r2, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080B11DE
	strb r2, [r1]
	ldr r1, _080B11B0  @ =0x00000545
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #12
	and r0, r0, r1
	cmp r0, #0
	beq _080B11DE
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080B11B8
_080B1190:
	ldr r0, _080B11B4  @ =0x000009E8
	add r4, r4, r0
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #2
	bls _080B11CC
	strh r7, [r4]
	b _080B11CC
	.byte 0x00
	.byte 0x00
_080B11A8:
	.4byte 0x00000534
_080B11AC:
	.4byte 0x00000A02
_080B11B0:
	.4byte 0x00000545
_080B11B4:
	.4byte 0x000009E8
_080B11B8:
	ldr r0, _080B124C  @ =0x000009E8
	add r1, r5, r0
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080B11CC
	mov r0, #2
	strh r0, [r1]
_080B11CC:
	ldr r0, _080B1250  @ =gRam
	ldr r1, _080B1254  @ =0x00000A02
	add r0, r0, r1
	mov r1, #12
	strb r1, [r0]
	mov r0, #69
	mov r1, #0
	bl sub_0812A324
_080B11DE:
	ldr r4, _080B1250  @ =gRam
	ldr r1, _080B1258  @ =0x00000534
	add r0, r4, r1
	ldrh r2, [r0]
	mov r1, #1
	and r1, r1, r2
	mov r0, #2
	and r0, r0, r2
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r1, r1, r0
	mov r0, #8
	and r0, r0, r2
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r1, r1, r0
	cmp r1, #0
	beq _080B1282
	mov r0, #15
	mov r1, #0
	bl sub_0812A324
	ldr r0, _080B125C  @ =0x00000A3C
	add r1, r4, r0
	mov r2, #0
	ldr r0, _080B1260  @ =0x0000FFF1
	strh r0, [r1]
	ldr r0, _080B1264  @ =0x000009EC
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _080B1268  @ =0x00001645
	add r0, r4, r1
	strb r2, [r0]
	ldr r1, _080B124C  @ =0x000009E8
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #1
	bhi _080B127C
	ldr r0, _080B126C  @ =0x007F007F
	str r0, [sp]
	ldr r1, _080B1270  @ =0x06008200
	ldr r2, _080B1274  @ =0x01000200
	mov r0, sp
	bl CpuFastSet
	ldr r0, _080B1278  @ =0x00001AE8
	add r1, r4, r0
	mov r0, #200
	lsl r0, r0, #1
	strh r0, [r1]
	bl sub_08129684
	b _080B1282
	.byte 0x00
	.byte 0x00
_080B124C:
	.4byte 0x000009E8
_080B1250:
	.4byte gRam
_080B1254:
	.4byte 0x00000A02
_080B1258:
	.4byte 0x00000534
_080B125C:
	.4byte 0x00000A3C
_080B1260:
	.4byte 0x0000FFF1
_080B1264:
	.4byte 0x000009EC
_080B1268:
	.4byte 0x00001645
_080B126C:
	.4byte 0x007F007F
_080B1270:
	.4byte 0x06008200
_080B1274:
	.4byte 0x01000200
_080B1278:
	.4byte 0x00001AE8
_080B127C:
	mov r0, #0
	bl sub_080B128C
_080B1282:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080B10E0

	.byte 0x00
	.byte 0x00
