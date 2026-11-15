	THUMB_FUNC_START sub_0807AB2C
sub_0807AB2C: @ 0x0807AB2C
	push {r4,lr}
	ldr r3, _0807AB6C  @ =gRam
	ldr r1, _0807AB70  @ =0x0000097C
	add r0, r3, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	ldr r4, _0807AB74  @ =0x000009E6
	add r1, r3, r4
	add r0, r0, r1
	ldrb r2, [r0]
	cmp r2, #0
	beq _0807AB88
	ldr r1, _0807AB78  @ =gUnknown_08152ABA
	ldr r2, _0807AB7C  @ =0x00000996
	add r0, r3, r2
	ldrb r2, [r0]
	mov r0, #1
	and r0, r0, r2
	lsl r0, r0, #1
	add r1, r0, r1
	ldrh r2, [r1]
	add r4, r4, #66
	add r1, r3, r4
	strh r2, [r1]
	ldr r1, _0807AB80  @ =gUnknown_08152ABE
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r2, _0807AB84  @ =0x00000A2A
	add r0, r3, r2
	strh r1, [r0]
	b _0807AB94
	.byte 0x00
	.byte 0x00
_0807AB6C:
	.4byte gRam
_0807AB70:
	.4byte 0x0000097C
_0807AB74:
	.4byte 0x000009E6
_0807AB78:
	.4byte gUnknown_08152ABA
_0807AB7C:
	.4byte 0x00000996
_0807AB80:
	.4byte gUnknown_08152ABE
_0807AB84:
	.4byte 0x00000A2A
_0807AB88:
	ldr r4, _0807AB9C  @ =0x00000A2A
	add r0, r3, r4
	strh r2, [r0]
	ldr r1, _0807ABA0  @ =0x00000A28
	add r0, r3, r1
	strh r2, [r0]
_0807AB94:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807AB9C:
	.4byte 0x00000A2A
_0807ABA0:
	.4byte 0x00000A28
	THUMB_FUNC_END sub_0807AB2C

