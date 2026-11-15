	THUMB_FUNC_START sub_08023010
sub_08023010: @ 0x08023010
	push {r4,lr}
	add r2, r0, #0
	ldr r0, [r2, #112]
	ldrh r1, [r0]
	ldr r0, _0802303C  @ =0x0000FFFF
	cmp r1, r0
	bne _08023022
	ldr r0, [r2, #116]
	str r0, [r2, #112]
_08023022:
	ldr r3, [r2, #112]
	ldrh r1, [r3]
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	add r4, r3, #0
	cmp r0, #0
	beq _08023040
	mov r0, #8
	strb r0, [r2, #21]
	ldrh r0, [r4, #2]
	strb r0, [r2, #23]
	b _080230EC
_0802303C:
	.4byte 0x0000FFFF
_08023040:
	add r0, r2, #0
	add r0, r0, #43
	strb r1, [r0]
	add r3, r4, #2
	lsl r0, r1, #24
	lsr r0, r0, #26
	strb r0, [r2, #21]
	ldrb r0, [r2, #21]
	cmp r0, #7
	bhi _080230E0
	lsl r0, r0, #2
	ldr r1, _08023060  @ =0x08023064
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
	.byte 0x00
	.byte 0x00
_08023060:
	.4byte 0x08023064
	.4byte _08023090
	.4byte _08023084
	.4byte _080230A8
	.4byte _0802309C
	.4byte _080230BC
	.4byte _080230B0
	.4byte _080230D4
	.4byte _080230C8
_08023084:
	ldrh r0, [r3]
	ldrh r1, [r2, #50]
	add r0, r0, r1
	add r1, r2, #0
	add r1, r1, #120
	strh r0, [r1]
_08023090:
	ldrh r0, [r2, #54]
	ldrh r1, [r3]
	sub r0, r0, r1
	add r1, r2, #0
	add r1, r1, #122
	b _080230DE
_0802309C:
	ldrh r0, [r3]
	ldrh r1, [r2, #54]
	add r0, r0, r1
	add r1, r2, #0
	add r1, r1, #122
	strh r0, [r1]
_080230A8:
	ldrh r0, [r3]
	ldrh r1, [r2, #50]
	add r0, r0, r1
	b _080230DA
_080230B0:
	ldrh r0, [r2, #50]
	ldrh r1, [r3]
	sub r0, r0, r1
	add r1, r2, #0
	add r1, r1, #120
	strh r0, [r1]
_080230BC:
	ldrh r0, [r3]
	ldrh r1, [r2, #54]
	add r0, r0, r1
	add r1, r2, #0
	add r1, r1, #122
	b _080230DE
_080230C8:
	ldrh r0, [r2, #54]
	ldrh r1, [r3]
	sub r0, r0, r1
	add r1, r2, #0
	add r1, r1, #122
	strh r0, [r1]
_080230D4:
	ldrh r0, [r2, #50]
	ldrh r1, [r3]
	sub r0, r0, r1
_080230DA:
	add r1, r2, #0
	add r1, r1, #120
_080230DE:
	strh r0, [r1]
_080230E0:
	add r3, r3, #2
	ldrh r0, [r3]
	ldr r4, [r2, #112]
	cmp r0, #0
	beq _080230EC
	str r0, [r2, #12]
_080230EC:
	add r0, r4, #0
	add r0, r0, #8
	str r0, [r2, #112]
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08023010

