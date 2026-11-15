	THUMB_FUNC_START sub_0810AA24
sub_0810AA24: @ 0x0810AA24
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r6, #0
	ldr r4, _0810AB30  @ =gRam
	ldr r1, _0810AB34  @ =0x00001172
	add r0, r4, r1
	add r0, r5, r0
	strb r6, [r0]
	add r0, r5, #0
	bl sub_080C5044
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810AAAC
	add r0, r5, #0
	bl Sprite3_Move
	add r0, r5, #0
	bl sub_080C7A20
	mov r1, #3
	and r1, r1, r0
	cmp r1, #0
	beq _0810AA70
	ldr r2, _0810AB38  @ =0x00000F22
	add r1, r4, r2
	add r1, r5, r1
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _0810AB3C  @ =0x00001092
	add r1, r4, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0810AA70:
	ldr r1, _0810AB40  @ =0x00001042
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #12
	and r0, r0, r1
	cmp r0, #0
	beq _0810AA9A
	ldr r2, _0810AB44  @ =0x00000F12
	add r1, r4, r2
	add r1, r5, r1
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _0810AB3C  @ =0x00001092
	add r1, r4, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0810AA9A:
	ldr r1, _0810AB3C  @ =0x00001092
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #2
	bls _0810AAA8
	mov r6, #1
_0810AAA8:
	cmp r6, #0
	beq _0810AACA
_0810AAAC:
	ldr r2, _0810AB30  @ =gRam
	ldr r1, _0810AB48  @ =0x00000F52
	add r0, r2, r1
	add r0, r5, r0
	mov r1, #4
	strb r1, [r0]
	ldr r0, _0810AB4C  @ =0x00000FC2
	add r2, r2, r0
	add r2, r5, r2
	mov r0, #15
	strb r0, [r2]
	add r0, r5, #0
	mov r1, #110
	bl sub_080CF0AC
_0810AACA:
	ldr r6, _0810AB30  @ =gRam
	ldr r2, _0810AB50  @ =0x00001052
	add r1, r6, r2
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _0810AB54  @ =0x00000F92
	add r2, r6, r1
	add r2, r5, r2
	ldr r3, _0810AB58  @ =gUnknown_0817C8C8
	lsl r0, r0, #24
	lsr r0, r0, #27
	mov r1, #3
	and r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r2, _0810AB5C  @ =0x00000996
	add r0, r6, r2
	ldrb r1, [r0]
	add r0, r5, #0
	eor r0, r0, r1
	mov r1, #7
	and r0, r0, r1
	cmp r0, #0
	bne _0810AB28
	bl GetRandomInt
	mov r4, #15
	add r1, r4, #0
	and r1, r1, r0
	sub r1, r1, #4
	mov r2, #150
	lsl r2, r2, #4
	add r0, r6, r2
	strh r1, [r0]
	bl GetRandomInt
	and r4, r4, r0
	sub r4, r4, #4
	ldr r1, _0810AB60  @ =0x00000964
	add r0, r6, r1
	strh r4, [r0]
	add r0, r5, #0
	bl sub_080C9A58
_0810AB28:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810AB30:
	.4byte gRam
_0810AB34:
	.4byte 0x00001172
_0810AB38:
	.4byte 0x00000F22
_0810AB3C:
	.4byte 0x00001092
_0810AB40:
	.4byte 0x00001042
_0810AB44:
	.4byte 0x00000F12
_0810AB48:
	.4byte 0x00000F52
_0810AB4C:
	.4byte 0x00000FC2
_0810AB50:
	.4byte 0x00001052
_0810AB54:
	.4byte 0x00000F92
_0810AB58:
	.4byte gUnknown_0817C8C8
_0810AB5C:
	.4byte 0x00000996
_0810AB60:
	.4byte 0x00000964
	THUMB_FUNC_END sub_0810AA24

