	THUMB_FUNC_START sub_0810E60C
sub_0810E60C: @ 0x0810E60C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _0810E680  @ =gRam
	ldr r1, _0810E684  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0810E644
	ldr r2, _0810E688  @ =0x00000F92
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #3
	bne _0810E63C
	mov r1, #2
_0810E63C:
	ldr r2, _0810E68C  @ =0x00001082
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
_0810E644:
	add r0, r4, #0
	bl sub_080C6340
	add r0, r4, #0
	bl sub_080E67E8
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810E67A
	add r0, r4, #0
	bl sub_080C5080
	ldr r1, _0810E690  @ =gUnknown_0817D0AC
	ldr r0, _0810E680  @ =gRam
	ldr r2, _0810E694  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_0810E67A:
	pop {r4,r5}
	pop {r0}
	bx r0
_0810E680:
	.4byte gRam
_0810E684:
	.4byte 0x00000996
_0810E688:
	.4byte 0x00000F92
_0810E68C:
	.4byte 0x00001082
_0810E690:
	.4byte gUnknown_0817D0AC
_0810E694:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_0810E60C

