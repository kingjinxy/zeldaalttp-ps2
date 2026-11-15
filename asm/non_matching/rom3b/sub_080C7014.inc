	THUMB_FUNC_START sub_080C7014
sub_080C7014: @ 0x080C7014
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080C7050  @ =gRam
	ldr r1, _080C7054  @ =0x00001012
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _080C7064
	ldr r0, _080C7058  @ =gUnknown_0822A8CA
	ldr r1, _080C705C  @ =gUnknown_0822A860
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r0, r4, #0
	bl sub_080C7490
	lsl r0, r0, #24
	cmp r0, #0
	beq _080C70D6
	ldr r2, _080C7060  @ =0x00001042
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080C70D6
_080C7050:
	.4byte gRam
_080C7054:
	.4byte 0x00001012
_080C7058:
	.4byte gUnknown_0822A8CA
_080C705C:
	.4byte gUnknown_0822A860
_080C7060:
	.4byte 0x00001042
_080C7064:
	ldr r1, _080C7088  @ =0x00001132
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080C7090
	ldr r2, _080C708C  @ =0x00000B14
	add r0, r5, r2
	ldrh r0, [r0]
	cmp r0, #0
	beq _080C7090
	add r0, r4, #0
	bl sub_080C7A80
	b _080C70D6
	.byte 0x00
	.byte 0x00
_080C7088:
	.4byte 0x00001132
_080C708C:
	.4byte 0x00000B14
_080C7090:
	mov r1, #0
	ldr r0, _080C70DC  @ =gRam
	ldr r2, _080C70E0  @ =0x00000F12
	add r0, r0, r2
	add r0, r4, r0
	ldrb r2, [r0]
	cmp r2, #0
	beq _080C70B0
	mov r0, #128
	and r2, r2, r0
	cmp r2, #0
	bne _080C70AA
	mov r1, #1
_080C70AA:
	add r0, r4, #0
	bl sub_080C7384
_080C70B0:
	mov r1, #2
	ldr r0, _080C70DC  @ =gRam
	ldr r2, _080C70E4  @ =0x00000F22
	add r0, r0, r2
	add r0, r4, r0
	ldrb r2, [r0]
	cmp r2, #0
	beq _080C70D0
	mov r0, #128
	and r2, r2, r0
	cmp r2, #0
	bne _080C70CA
	mov r1, #3
_080C70CA:
	add r0, r4, #0
	bl sub_080C7278
_080C70D0:
	add r0, r4, #0
	bl sub_080C70E8
_080C70D6:
	pop {r4,r5}
	pop {r0}
	bx r0
_080C70DC:
	.4byte gRam
_080C70E0:
	.4byte 0x00000F12
_080C70E4:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080C7014

