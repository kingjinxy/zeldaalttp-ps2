	THUMB_FUNC_START sub_0810DAE8
sub_0810DAE8: @ 0x0810DAE8
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r7, r5, #0
	ldr r6, _0810DB64  @ =gRam
	ldr r0, _0810DB68  @ =0x00000F92
	add r1, r6, r0
	add r1, r5, r1
	ldr r2, _0810DB6C  @ =gUnknown_0817CEF8
	sub r0, r0, #48
	add r4, r6, r0
	add r4, r5, r4
	ldrb r0, [r4]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _0810DB70  @ =0x00001122
	add r2, r6, r1
	add r2, r5, r2
	ldrb r0, [r2]
	mov r1, #63
	and r1, r1, r0
	ldr r3, _0810DB74  @ =gUnknown_0817CF08
	ldrb r0, [r4]
	add r0, r0, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r2]
	add r0, r5, #0
	bl sub_080C6240
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810DB82
	add r0, r5, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810DB82
	add r0, r5, #0
	bl sub_080C5044
	add r0, r5, #0
	bl Sprite3_Move
	add r0, r5, #0
	bl sub_080C79F8
	ldr r1, _0810DB78  @ =0x00000F52
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0810DB7C
	add r0, r5, #0
	bl sub_0810DC20
	b _0810DB82
_0810DB64:
	.4byte gRam
_0810DB68:
	.4byte 0x00000F92
_0810DB6C:
	.4byte gUnknown_0817CEF8
_0810DB70:
	.4byte 0x00001122
_0810DB74:
	.4byte gUnknown_0817CF08
_0810DB78:
	.4byte 0x00000F52
_0810DB7C:
	add r0, r7, #0
	bl sub_0810DB88
_0810DB82:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810DAE8

