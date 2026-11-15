	THUMB_FUNC_START sub_080CC4F0
sub_080CC4F0: @ 0x080CC4F0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080CC5D4  @ =gRam
	ldr r1, _080CC5D8  @ =0x00000D23
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r2, _080CC5DC  @ =0x00000D2B
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r3, _080CC5E0  @ =0x00000952
	add r0, r4, r3
	ldrh r0, [r0]
	sub r1, r1, r0
	mov r2, #255
	lsl r2, r2, #8
	and r1, r1, r2
	cmp r1, #0
	beq _080CC520
	b _080CC62A
_080CC520:
	ldr r1, _080CC5E4  @ =0x00000D33
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r3, _080CC5E8  @ =0x00000D3B
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r3, _080CC5EC  @ =0x00000958
	add r0, r4, r3
	ldrh r0, [r0]
	sub r3, r1, r0
	and r3, r3, r2
	cmp r3, #0
	bne _080CC62A
	ldr r1, _080CC5F0  @ =0x00000D43
	add r0, r4, r1
	add r1, r5, r0
	ldrb r2, [r1]
	cmp r2, #0
	beq _080CC61C
	add r0, r2, #1
	strb r0, [r1]
	ldr r1, _080CC5F4  @ =gUnknown_08172A08
	add r1, r5, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r1, [r1]
	cmp r0, r1
	bne _080CC62A
	ldr r2, _080CC5F8  @ =0x00000D1B
	add r0, r4, r2
	add r0, r5, r0
	strb r3, [r0]
	mov r0, #133
	add r1, r5, #0
	mov r2, #12
	bl sub_080C9AAC
	add r2, r0, #0
	cmp r2, #0
	blt _080CC62A
	ldr r3, _080CC5FC  @ =0x00000EE2
	add r0, r4, r3
	add r0, r2, r0
	ldr r3, _080CC600  @ =0x00000969
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080CC604  @ =0x00000F02
	add r0, r4, r1
	add r0, r2, r0
	add r3, r3, #3
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080CC608  @ =0x00000ED2
	add r0, r4, r1
	add r0, r2, r0
	add r3, r3, #1
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080CC60C  @ =0x00000EF2
	add r0, r4, r1
	add r0, r2, r0
	add r3, r3, #3
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080CC610  @ =0x00001142
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #224
	strb r1, [r0]
	ldr r3, _080CC614  @ =0x000010F2
	add r1, r4, r3
	add r1, r2, r1
	ldr r2, _080CC618  @ =0x00000D5B
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r5, #0
	mov r1, #108
	bl sub_080CF0AC
	b _080CC62A
_080CC5D4:
	.4byte gRam
_080CC5D8:
	.4byte 0x00000D23
_080CC5DC:
	.4byte 0x00000D2B
_080CC5E0:
	.4byte 0x00000952
_080CC5E4:
	.4byte 0x00000D33
_080CC5E8:
	.4byte 0x00000D3B
_080CC5EC:
	.4byte 0x00000958
_080CC5F0:
	.4byte 0x00000D43
_080CC5F4:
	.4byte gUnknown_08172A08
_080CC5F8:
	.4byte 0x00000D1B
_080CC5FC:
	.4byte 0x00000EE2
_080CC600:
	.4byte 0x00000969
_080CC604:
	.4byte 0x00000F02
_080CC608:
	.4byte 0x00000ED2
_080CC60C:
	.4byte 0x00000EF2
_080CC610:
	.4byte 0x00001142
_080CC614:
	.4byte 0x000010F2
_080CC618:
	.4byte 0x00000D5B
_080CC61C:
	ldr r3, _080CC630  @ =0x00000DBA
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080CC62A
	add r0, r2, #1
	strb r0, [r1]
_080CC62A:
	pop {r4,r5}
	pop {r0}
	bx r0
_080CC630:
	.4byte 0x00000DBA
	THUMB_FUNC_END sub_080CC4F0

