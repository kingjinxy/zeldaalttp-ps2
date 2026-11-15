	THUMB_FUNC_START sub_081134D0
sub_081134D0: @ 0x081134D0
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r3, _08113534  @ =gRam
	ldr r2, _08113538  @ =0x00000F52
	add r0, r3, r2
	add r0, r4, r0
	mov r5, #0
	mov r2, #12
	strb r2, [r0]
	ldr r2, _0811353C  @ =gUnknown_02010993
	mov r0, #1
	strb r0, [r2]
	ldr r0, _08113540  @ =gUnknown_02010994
	strb r4, [r0]
	add r0, r0, #1
	strb r5, [r0]
	ldr r2, _08113544  @ =0x00000FC2
	add r0, r3, r2
	add r0, r4, r0
	mov r2, #48
	strb r2, [r0]
	ldr r2, _08113548  @ =0x00000F62
	add r0, r3, r2
	add r0, r4, r0
	strb r5, [r0]
	add r2, r2, #16
	add r0, r3, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r1, _0811354C  @ =0x00000F12
	add r0, r3, r1
	add r0, r4, r0
	strb r5, [r0]
	sub r2, r2, #80
	add r3, r3, r2
	add r3, r4, r3
	strb r5, [r3]
	add r0, r4, #0
	bl sub_08116940
	add r0, r4, #0
	mov r1, #20
	bl sub_080CF018
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08113534:
	.4byte gRam
_08113538:
	.4byte 0x00000F52
_0811353C:
	.4byte gUnknown_02010993
_08113540:
	.4byte gUnknown_02010994
_08113544:
	.4byte 0x00000FC2
_08113548:
	.4byte 0x00000F62
_0811354C:
	.4byte 0x00000F12
	THUMB_FUNC_END sub_081134D0

