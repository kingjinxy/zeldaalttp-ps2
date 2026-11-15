	THUMB_FUNC_START sub_0807D974
sub_0807D974: @ 0x0807D974
	push {r4,lr}
	ldr r4, _0807D9A8  @ =gRam
	ldr r1, _0807D9AC  @ =0x00000AA8
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #4
	and r0, r0, r1
	cmp r0, #0
	bne _0807D9BC
	ldr r2, _0807D9B0  @ =0x00000B18
	add r1, r4, r2
	mov r0, #15
	strh r0, [r1]
	mov r0, #151
	lsl r0, r0, #4
	add r1, r4, r0
	ldr r2, _0807D9B4  @ =0xFFFFFD80
	add r0, r2, #0
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r2, _0807D9B8  @ =0x00000B1A
	add r1, r4, r2
	strh r0, [r1]
	b _0807D9E0
	.byte 0x00
	.byte 0x00
_0807D9A8:
	.4byte gRam
_0807D9AC:
	.4byte 0x00000AA8
_0807D9B0:
	.4byte 0x00000B18
_0807D9B4:
	.4byte 0xFFFFFD80
_0807D9B8:
	.4byte 0x00000B1A
_0807D9BC:
	mov r1, #151
	lsl r1, r1, #4
	add r0, r4, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	ldr r1, _0807D9E8  @ =0xFFFFFD80
	add r0, r0, r1
	ldr r1, _0807D9EC  @ =gUnknown_08165908
	mov r2, #10
	bl sub_0807BA68
	ldr r0, _0807D9F0  @ =gUnknown_0816341C
	bl sub_08088AF8
	ldr r2, _0807D9F4  @ =0x00001812
	add r1, r4, r2
	mov r0, #1
	strb r0, [r1]
_0807D9E0:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807D9E8:
	.4byte 0xFFFFFD80
_0807D9EC:
	.4byte gUnknown_08165908
_0807D9F0:
	.4byte gUnknown_0816341C
_0807D9F4:
	.4byte 0x00001812
	THUMB_FUNC_END sub_0807D974

