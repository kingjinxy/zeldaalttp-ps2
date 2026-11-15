	THUMB_FUNC_START sub_0810FA38
sub_0810FA38: @ 0x0810FA38
	push {r4,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r2, _0810FA84  @ =gRam
	ldr r1, _0810FA88  @ =0x00000CB4
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0810FA7C
	ldr r0, _0810FA8C  @ =gMagicPowder
	ldrb r0, [r0]
	cmp r0, #2
	beq _0810FA7C
	ldr r0, _0810FA90  @ =gUnknown_02002212
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r4, #150
	lsl r4, r4, #4
	add r1, r2, r4
	strh r0, [r1]
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	beq _0810FA7C
	mov r2, #16
	neg r2, r2
	add r0, r3, #0
	mov r1, #1
	mov r3, #0
	bl sub_0810F650
_0810FA7C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810FA84:
	.4byte gRam
_0810FA88:
	.4byte 0x00000CB4
_0810FA8C:
	.4byte gMagicPowder
_0810FA90:
	.4byte gUnknown_02002212
	THUMB_FUNC_END sub_0810FA38

