	THUMB_FUNC_START sub_0809B0DC
sub_0809B0DC: @ 0x0809B0DC
	push {r4,lr}
	ldr r1, _0809B12C  @ =gRam
	ldr r0, _0809B130  @ =0x00001728
	add r3, r1, r0
	mov r2, #0
	strb r2, [r3]
	ldr r4, _0809B134  @ =0x00001729
	add r0, r1, r4
	strb r2, [r0]
	ldr r2, _0809B138  @ =0x000016CC
	add r0, r1, r2
	ldrb r2, [r0]
	mov r0, #12
	and r0, r0, r2
	add r4, r1, #0
	cmp r0, #0
	beq _0809B162
	ldr r1, _0809B13C  @ =0x0000172C
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #1
	bne _0809B162
	mov r0, #4
	and r0, r0, r2
	cmp r0, #0
	beq _0809B140
	mov r2, #182
	lsl r2, r2, #5
	add r0, r4, r2
	ldrh r0, [r0]
	add r0, r0, #28
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
	mov r1, #252
	and r0, r0, r1
	cmp r0, #0
	bne _0809B162
	b _0809B152
_0809B12C:
	.4byte gRam
_0809B130:
	.4byte 0x00001728
_0809B134:
	.4byte 0x00001729
_0809B138:
	.4byte 0x000016CC
_0809B13C:
	.4byte 0x0000172C
_0809B140:
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	ldrh r0, [r0]
	sub r0, r0, #18
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
_0809B152:
	ldr r1, _0809B19C  @ =0x00000961
	add r0, r4, r1
	ldr r2, _0809B1A0  @ =0x000016ED
	add r1, r4, r2
	ldrb r0, [r0]
	ldrb r1, [r1]
	sub r0, r0, r1
	strb r0, [r3]
_0809B162:
	ldr r1, _0809B1A4  @ =0x000016CC
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	beq _0809B1D4
	ldr r2, _0809B1A8  @ =0x0000172C
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #2
	bne _0809B1D4
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0809B1B0
	ldr r1, _0809B1AC  @ =0x000016C4
	add r0, r4, r1
	ldrh r0, [r0]
	add r0, r0, #21
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
	mov r1, #252
	and r0, r0, r1
	cmp r0, #0
	bne _0809B1D4
	b _0809B1C0
_0809B19C:
	.4byte 0x00000961
_0809B1A0:
	.4byte 0x000016ED
_0809B1A4:
	.4byte 0x000016CC
_0809B1A8:
	.4byte 0x0000172C
_0809B1AC:
	.4byte 0x000016C4
_0809B1B0:
	ldr r1, _0809B208  @ =0x000016C4
	add r0, r4, r1
	ldrh r0, [r0]
	sub r0, r0, #8
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
_0809B1C0:
	ldr r1, _0809B20C  @ =0x00000961
	add r0, r4, r1
	ldr r2, _0809B210  @ =0x000016F1
	add r1, r4, r2
	ldrb r0, [r0]
	ldrb r1, [r1]
	sub r0, r0, r1
	add r2, r2, #56
	add r1, r4, r2
	strb r0, [r1]
_0809B1D4:
	add r3, r4, #0
	ldr r1, _0809B214  @ =0x00001729
	add r0, r3, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	beq _0809B24C
	cmp r0, #0
	ble _0809B220
	ldr r2, _0809B218  @ =0x00001794
	add r0, r3, r2
	mov r1, #0
	strb r1, [r0]
	ldr r4, _0809B21C  @ =0x00001791
	add r0, r3, r4
	strb r1, [r0]
	sub r2, r2, #2
	add r0, r3, r2
	strb r1, [r0]
	add r4, r4, #119
	add r0, r3, r4
	strb r1, [r0]
	bl sub_08070B04
	b _0809B2A0
_0809B208:
	.4byte 0x000016C4
_0809B20C:
	.4byte 0x00000961
_0809B210:
	.4byte 0x000016F1
_0809B214:
	.4byte 0x00001729
_0809B218:
	.4byte 0x00001794
_0809B21C:
	.4byte 0x00001791
_0809B220:
	ldr r1, _0809B240  @ =0x00001794
	add r0, r3, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _0809B244  @ =0x00001791
	add r0, r3, r2
	strb r1, [r0]
	ldr r4, _0809B248  @ =0x00001792
	add r0, r3, r4
	strb r1, [r0]
	add r2, r2, #119
	add r0, r3, r2
	strb r1, [r0]
	bl sub_08070B24
	b _0809B2A0
_0809B240:
	.4byte 0x00001794
_0809B244:
	.4byte 0x00001791
_0809B248:
	.4byte 0x00001792
_0809B24C:
	ldr r1, _0809B27C  @ =0x00001728
	add r0, r3, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	cmp r0, #0
	beq _0809B2A0
	cmp r0, #0
	ble _0809B284
	ldr r4, _0809B280  @ =0x00001794
	add r0, r3, r4
	strb r2, [r0]
	add r1, r1, #105
	add r0, r3, r1
	strb r2, [r0]
	sub r4, r4, #2
	add r0, r3, r4
	strb r2, [r0]
	add r1, r1, #119
	add r0, r3, r1
	strb r2, [r0]
	bl sub_08070B44
	b _0809B2A0
	.byte 0x00
	.byte 0x00
_0809B27C:
	.4byte 0x00001728
_0809B280:
	.4byte 0x00001794
_0809B284:
	ldr r1, _0809B2A8  @ =0x00001794
	add r0, r4, r1
	strb r2, [r0]
	sub r1, r1, #3
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #118
	add r0, r4, r1
	strb r2, [r0]
	bl sub_0806FB58
_0809B2A0:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809B2A8:
	.4byte 0x00001794
	THUMB_FUNC_END sub_0809B0DC

