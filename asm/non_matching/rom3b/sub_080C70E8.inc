	THUMB_FUNC_START sub_080C70E8
sub_080C70E8: @ 0x080C70E8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080C7158  @ =gRam
	ldr r1, _080C715C  @ =0x000011B2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080C7102
	b _080C7272
_080C7102:
	ldr r1, _080C7160  @ =0x00001142
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C7110
	b _080C7272
_080C7110:
	ldr r1, _080C7164  @ =gUnknown_0822A8C8
	ldr r0, _080C7168  @ =gUnknown_0822A860
	sub r1, r1, r0
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl sub_080C7490
	ldr r1, _080C716C  @ =0x000013B2
	add r0, r5, r1
	add r0, r4, r0
	ldr r1, _080C7170  @ =0x000015E2
	add r2, r5, r1
	ldrh r1, [r2]
	strb r1, [r0]
	ldrh r0, [r2]
	cmp r0, #28
	bne _080C7180
	ldr r1, _080C7174  @ =0x000015F7
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C7180
	ldr r1, _080C7178  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #11
	bne _080C7180
	ldr r1, _080C717C  @ =0x000010F2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	b _080C7272
	.byte 0x00
	.byte 0x00
_080C7158:
	.4byte gRam
_080C715C:
	.4byte 0x000011B2
_080C7160:
	.4byte 0x00001142
_080C7164:
	.4byte gUnknown_0822A8C8
_080C7168:
	.4byte gUnknown_0822A860
_080C716C:
	.4byte 0x000013B2
_080C7170:
	.4byte 0x000015E2
_080C7174:
	.4byte 0x000015F7
_080C7178:
	.4byte 0x00000FA2
_080C717C:
	.4byte 0x000010F2
_080C7180:
	ldr r5, _080C71B0  @ =gRam
	ldr r1, _080C71B4  @ =0x000015E2
	add r0, r5, r1
	ldrh r0, [r0]
	add r2, r0, #0
	cmp r2, #12
	bne _080C71BC
	sub r1, r1, #54
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #28
	bne _080C7272
	add r0, r4, #0
	bl sub_080C78DC
	ldr r1, _080C71B8  @ =0x00001042
	add r0, r5, r1
	add r0, r4, r0
	ldrb r2, [r0]
	mov r1, #32
	orr r1, r1, r2
	strb r1, [r0]
	b _080C7272
_080C71B0:
	.4byte gRam
_080C71B4:
	.4byte 0x000015E2
_080C71B8:
	.4byte 0x00001042
_080C71BC:
	cmp r2, #32
	bne _080C7244
	ldr r1, _080C7214  @ =0x00000D84
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080C7272
	ldr r1, _080C7218  @ =0x000009B2
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080C723C
	ldr r1, _080C721C  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #5
	strb r1, [r0]
	ldr r1, _080C7220  @ =0x00000FF2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #19
	beq _080C71F8
	cmp r0, #38
	bne _080C722C
_080C71F8:
	ldr r0, _080C7224  @ =0x00001122
	add r1, r5, r0
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #254
	and r0, r0, r2
	strb r0, [r1]
	ldr r1, _080C7228  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #63
	strb r1, [r0]
	b _080C7272
	.byte 0x00
	.byte 0x00
_080C7214:
	.4byte 0x00000D84
_080C7218:
	.4byte 0x000009B2
_080C721C:
	.4byte 0x00000FA2
_080C7220:
	.4byte 0x00000FF2
_080C7224:
	.4byte 0x00001122
_080C7228:
	.4byte 0x00000FC2
_080C722C:
	ldr r1, _080C7238  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #95
	strb r1, [r0]
	b _080C7272
_080C7238:
	.4byte 0x00000FC2
_080C723C:
	add r0, r4, #0
	bl sub_080C8094
	b _080C7272
_080C7244:
	cmp r2, #103
	bhi _080C7264
	cmp r2, #8
	bne _080C7272
	ldr r1, _080C7260  @ =0x00000B14
	add r0, r5, r1
	ldrh r0, [r0]
	cmp r0, #4
	bne _080C7272
	add r0, r4, #0
	mov r1, #106
	bl sub_080CA118
	b _080C7272
_080C7260:
	.4byte 0x00000B14
_080C7264:
	cmp r2, #107
	bhi _080C7272
	lsl r1, r0, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl sub_080CA118
_080C7272:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C70E8

