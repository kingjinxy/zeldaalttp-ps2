	THUMB_FUNC_START sub_080DAF10
sub_080DAF10: @ 0x080DAF10
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080DB004  @ =gRam
	cmp r5, #0
	bne _080DAF36
	ldr r0, _080DB008  @ =0x00001002
	add r2, r6, r0
	ldrb r0, [r2]
	add r1, r0, #1
	strb r1, [r2]
	ldr r3, _080DB00C  @ =0x0000164C
	add r0, r6, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080DAF36
	mov r0, #3
	and r1, r1, r0
	strb r1, [r2]
_080DAF36:
	ldr r1, _080DB008  @ =0x00001002
	add r0, r6, r1
	add r7, r5, r0
	ldrb r0, [r7]
	cmp r0, #5
	bne _080DAF44
	b _080DB044
_080DAF44:
	mov r0, #123
	add r1, r5, #0
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	bge _080DAF54
	b _080DB068
_080DAF54:
	add r0, r5, #0
	mov r1, #92
	bl sub_080CF140
	ldr r3, _080DB010  @ =0x00000FB2
	add r0, r6, r3
	add r0, r5, r0
	ldrb r2, [r0]
	mov r0, #150
	lsl r0, r0, #4
	add r1, r6, r0
	ldr r0, _080DB014  @ =gUnknown_08175C54
	add r0, r2, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _080DB018  @ =gUnknown_08175C5A
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r0, _080DB01C  @ =0x00000964
	add r3, r6, r0
	ldr r0, _080DB020  @ =gUnknown_08175C60
	add r2, r2, r0
	ldrb r0, [r2]
	ldrh r2, [r3]
	add r2, r2, r0
	ldr r3, _080DB024  @ =0xFFFFFF00
	add r2, r2, r3
	lsl r0, r2, #16
	mov r12, r0
	ldr r3, _080DB028  @ =0x00000EE2
	add r0, r6, r3
	add r0, r4, r0
	strb r1, [r0]
	add r3, r3, #32
	add r0, r6, r3
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _080DB02C  @ =0x00000ED2
	add r0, r6, r1
	add r0, r4, r0
	strb r2, [r0]
	sub r3, r3, #16
	add r0, r6, r3
	add r0, r4, r0
	mov r1, r12
	lsr r3, r1, #24
	strb r3, [r0]
	ldr r1, _080DB030  @ =0x00001172
	add r0, r6, r1
	add r0, r4, r0
	strb r3, [r0]
	ldr r3, _080DB034  @ =0x00000F22
	add r0, r6, r3
	add r1, r4, r0
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080DB038  @ =0x00000F12
	add r0, r6, r1
	add r1, r4, r0
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldrb r0, [r7]
	cmp r0, #1
	bls _080DB068
	bl GetRandomInt
	mov r2, #1
	add r1, r2, #0
	and r1, r1, r0
	cmp r1, #0
	bne _080DB068
	ldr r3, _080DB03C  @ =0x00000F72
	add r0, r6, r3
	add r0, r4, r0
	strb r2, [r0]
	ldr r1, _080DB040  @ =0x00000FC2
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
	b _080DB068
	.byte 0x00
	.byte 0x00
_080DB004:
	.4byte gRam
_080DB008:
	.4byte 0x00001002
_080DB00C:
	.4byte 0x0000164C
_080DB010:
	.4byte 0x00000FB2
_080DB014:
	.4byte gUnknown_08175C54
_080DB018:
	.4byte gUnknown_08175C5A
_080DB01C:
	.4byte 0x00000964
_080DB020:
	.4byte gUnknown_08175C60
_080DB024:
	.4byte 0xFFFFFF00
_080DB028:
	.4byte 0x00000EE2
_080DB02C:
	.4byte 0x00000ED2
_080DB030:
	.4byte 0x00001172
_080DB034:
	.4byte 0x00000F22
_080DB038:
	.4byte 0x00000F12
_080DB03C:
	.4byte 0x00000F72
_080DB040:
	.4byte 0x00000FC2
_080DB044:
	mov r0, #0
	strb r0, [r7]
	add r0, r5, #0
	mov r1, #44
	bl sub_080CF140
	add r0, r5, #0
	bl sub_080DBD34
	add r0, r5, #0
	bl sub_080DBD34
	add r0, r5, #0
	bl sub_080DBD34
	add r0, r5, #0
	bl sub_080DBD34
_080DB068:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080DAF10

	.byte 0x00
	.byte 0x00
