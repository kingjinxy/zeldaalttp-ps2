	THUMB_FUNC_START sub_08135C78
sub_08135C78: @ 0x08135C78
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r2, _08135CE4  @ =gUnknown_0300001C
	ldr r1, _08135CE8  @ =0x04000208
	mov r9, r1
	ldrh r1, [r1]
	strh r1, [r2]
	mov r6, #0
	mov r2, r9
	strh r6, [r2]
	ldr r3, _08135CEC  @ =gUnknown_03000018
	mov r8, r3
	ldr r5, [r3]
	strh r6, [r5, #2]
	ldr r3, _08135CF0  @ =0x04000202
	ldr r4, _08135CF4  @ =gUnknown_03000010
	ldrb r1, [r4]
	mov r2, #8
	add r7, r2, #0
	lsl r7, r7, r1
	add r1, r7, #0
	strh r1, [r3]
	sub r3, r3, #2
	ldrb r1, [r4]
	lsl r2, r2, r1
	ldrh r1, [r3]
	orr r1, r1, r2
	strh r1, [r3]
	ldr r1, _08135CF8  @ =gUnknown_03000014
	strb r6, [r1]
	ldr r2, _08135CFC  @ =gUnknown_03000012
	ldrh r1, [r0]
	strh r1, [r2]
	add r0, r0, #2
	ldrh r1, [r0]
	strh r1, [r5]
	add r1, r5, #2
	mov r2, r8
	str r1, [r2]
	ldrh r0, [r0, #2]
	strh r0, [r5, #2]
	str r5, [r2]
	mov r0, #1
	mov r3, r9
	strh r0, [r3]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08135CE4:
	.4byte gUnknown_0300001C
_08135CE8:
	.4byte 0x04000208
_08135CEC:
	.4byte gUnknown_03000018
_08135CF0:
	.4byte 0x04000202
_08135CF4:
	.4byte gUnknown_03000010
_08135CF8:
	.4byte gUnknown_03000014
_08135CFC:
	.4byte gUnknown_03000012
	THUMB_FUNC_END sub_08135C78

