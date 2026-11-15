	THUMB_FUNC_START sub_0810ABE8
sub_0810ABE8: @ 0x0810ABE8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _0810AC58  @ =gRam
	ldr r1, _0810AC5C  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #9
	bne _0810AC50
	ldr r2, _0810AC60  @ =0x000010F2
	add r0, r5, r2
	add r0, r4, r0
	mov r2, #161
	lsl r2, r2, #4
	add r1, r5, r2
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _0810AC50
	add r0, r4, #0
	bl sub_080C36D8
	ldr r1, _0810AC64  @ =0x0000097D
	add r0, r5, r1
	ldrb r0, [r0]
	add r0, r0, #16
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #31
	bhi _0810AC50
	add r0, r4, #0
	bl sub_080C3028
	ldr r2, _0810AC68  @ =0x0000097C
	add r0, r5, r2
	ldrb r0, [r0]
	add r0, r0, #32
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #71
	bhi _0810AC50
	ldr r1, _0810AC6C  @ =0x00001012
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #2
	bl sub_080CF388
_0810AC50:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810AC58:
	.4byte gRam
_0810AC5C:
	.4byte 0x00000FA2
_0810AC60:
	.4byte 0x000010F2
_0810AC64:
	.4byte 0x0000097D
_0810AC68:
	.4byte 0x0000097C
_0810AC6C:
	.4byte 0x00001012
	THUMB_FUNC_END sub_0810ABE8

