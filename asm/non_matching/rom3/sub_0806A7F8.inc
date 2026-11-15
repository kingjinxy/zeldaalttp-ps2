	THUMB_FUNC_START sub_0806A7F8
sub_0806A7F8: @ 0x0806A7F8
	push {r4,r5,lr}
	ldr r4, _0806A854  @ =gRam
	ldr r0, _0806A858  @ =0x000009B2
	add r5, r4, r0
	mov r0, #0
	ldrsb r0, [r5, r0]
	cmp r0, #0
	bne _0806A81A
	bl sub_080B00F8
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r2, _0806A85C  @ =0x0000166C
	add r0, r4, r2
	strh r1, [r0]
_0806A81A:
	ldr r1, _0806A860  @ =0x00000A1C
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #44
	mul r0, r1, r0
	ldr r1, _0806A864  @ =gUnknown_08150EC4
	add r0, r0, r1
	ldrh r1, [r0, #40]
	cmp r1, #3
	bne _0806A838
	ldr r2, _0806A868  @ =0x0000165E
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #1
	bls _0806A90E
_0806A838:
	ldr r0, _0806A86C  @ =0x0000FFF2
	cmp r1, r0
	bne _0806A878
	ldr r2, _0806A870  @ =0x00000A42
	add r0, r4, r2
	ldrh r0, [r0]
	cmp r0, #22
	bne _0806A84A
	mov r1, #8
_0806A84A:
	ldr r2, _0806A874  @ =0x00000A3C
	add r0, r4, r2
	strh r1, [r0]
	b _0806A90E
	.byte 0x00
	.byte 0x00
_0806A854:
	.4byte gRam
_0806A858:
	.4byte 0x000009B2
_0806A85C:
	.4byte 0x0000166C
_0806A860:
	.4byte 0x00000A1C
_0806A864:
	.4byte gUnknown_08150EC4
_0806A868:
	.4byte 0x0000165E
_0806A86C:
	.4byte 0x0000FFF2
_0806A870:
	.4byte 0x00000A42
_0806A874:
	.4byte 0x00000A3C
_0806A878:
	mov r0, #0
	ldrsb r0, [r5, r0]
	cmp r0, #0
	beq _0806A8A4
	ldr r1, _0806A89C  @ =0x0000165E
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0806A8E0
	ldr r2, _0806A8A0  @ =0x000009DA
	add r0, r4, r2
	ldrh r1, [r0]
	mov r0, #130
	lsl r0, r0, #1
	cmp r1, r0
	beq _0806A90E
	b _0806A8E0
	.byte 0x00
	.byte 0x00
_0806A89C:
	.4byte 0x0000165E
_0806A8A0:
	.4byte 0x000009DA
_0806A8A4:
	ldr r1, _0806A924  @ =0x0000165E
	add r0, r4, r1
	ldrb r1, [r0]
	cmp r1, #0
	bne _0806A8B8
	ldr r2, _0806A928  @ =0x000009C6
	add r0, r4, r2
	ldrh r0, [r0]
	cmp r0, #44
	beq _0806A90E
_0806A8B8:
	add r2, r4, #0
	cmp r1, #1
	bne _0806A8D2
	ldr r1, _0806A92C  @ =0x00001661
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #7
	bne _0806A8D2
	ldr r1, _0806A928  @ =0x000009C6
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #44
	beq _0806A90E
_0806A8D2:
	ldr r1, _0806A930  @ =0x000009B2
	add r0, r2, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0806A906
_0806A8E0:
	ldr r0, _0806A934  @ =gRam
	ldr r2, _0806A924  @ =0x0000165E
	add r1, r0, r2
	ldrb r1, [r1]
	add r2, r0, #0
	cmp r1, #1
	bne _0806A906
	ldr r1, _0806A92C  @ =0x00001661
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #7
	bne _0806A906
	ldr r1, _0806A938  @ =0x000009DA
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #130
	lsl r0, r0, #1
	cmp r1, r0
	beq _0806A90E
_0806A906:
	ldr r0, _0806A93C  @ =0x00000A3C
	add r1, r2, r0
	ldr r0, _0806A940  @ =0x0000FFF1
	strh r0, [r1]
_0806A90E:
	bl sub_0808A6BC
	ldr r1, _0806A934  @ =gRam
	ldr r2, _0806A944  @ =0x000009AD
	add r1, r1, r2
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
_0806A924:
	.4byte 0x0000165E
_0806A928:
	.4byte 0x000009C6
_0806A92C:
	.4byte 0x00001661
_0806A930:
	.4byte 0x000009B2
_0806A934:
	.4byte gRam
_0806A938:
	.4byte 0x000009DA
_0806A93C:
	.4byte 0x00000A3C
_0806A940:
	.4byte 0x0000FFF1
_0806A944:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0806A7F8

