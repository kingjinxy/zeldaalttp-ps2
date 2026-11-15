	THUMB_FUNC_START sub_08068B7C
sub_08068B7C: @ 0x08068B7C
	push {r4,r5,lr}
	sub sp, sp, #4
	ldr r1, _08068BDC  @ =gRam
	ldr r2, _08068BE0  @ =0x00000982
	add r0, r1, r2
	ldrb r0, [r0]
	add r5, r1, #0
	cmp r0, #3
	bne _08068BFC
	ldr r0, _08068BE4  @ =0x04000006
	ldrh r3, [r0]
	lsl r0, r3, #1
	ldr r1, _08068BE8  @ =gUnknown_02001400
	add r0, r0, r1
	ldrh r0, [r0]
	str r0, [sp]
	ldr r4, _08068BEC  @ =0x04000028
	sub r2, r2, #50
	add r0, r5, r2
	mov r2, #0
	ldrsh r1, [r0, r2]
	lsl r1, r1, #8
	ldr r2, [sp]
	lsl r0, r2, #4
	sub r0, r0, r2
	lsl r0, r0, #3
	sub r1, r1, r0
	str r1, [r4]
	add r4, r4, #4
	ldr r1, _08068BF0  @ =0x00000956
	add r0, r5, r1
	mov r1, #0
	ldrsh r2, [r0, r1]
	lsl r2, r2, #8
	ldr r1, [sp]
	lsr r1, r1, #1
	ldr r0, [sp]
	add r0, r0, r1
	mul r0, r3, r0
	add r2, r2, r0
	str r2, [r4]
	ldr r1, _08068BF4  @ =0x04000020
	ldr r0, [sp]
	strh r0, [r1]
	ldr r1, _08068BF8  @ =0x04000202
	mov r0, #2
	strh r0, [r1]
	b _08068CE0
_08068BDC:
	.4byte gRam
_08068BE0:
	.4byte 0x00000982
_08068BE4:
	.4byte 0x04000006
_08068BE8:
	.4byte gUnknown_02001400
_08068BEC:
	.4byte 0x04000028
_08068BF0:
	.4byte 0x00000956
_08068BF4:
	.4byte 0x04000020
_08068BF8:
	.4byte 0x04000202
_08068BFC:
	cmp r0, #1
	bne _08068C20
	ldr r1, _08068C14  @ =0x04000006
	ldrh r0, [r1]
	cmp r0, #159
	bhi _08068C20
	ldr r0, _08068C18  @ =0x04000040
	ldrh r1, [r1]
	lsl r1, r1, #1
	ldr r2, _08068C1C  @ =gUnknown_02001400
	add r1, r1, r2
	b _08068CDC
_08068C14:
	.4byte 0x04000006
_08068C18:
	.4byte 0x04000040
_08068C1C:
	.4byte gUnknown_02001400
_08068C20:
	add r1, r5, #0
	ldr r2, _08068C58  @ =0x00000982
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #2
	bne _08068C68
	ldr r3, _08068C5C  @ =0x04000014
	ldr r2, _08068C60  @ =0x04000006
	ldrh r0, [r2]
	lsl r0, r0, #1
	ldr r1, _08068C64  @ =gUnknown_02001400
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r3]
	add r3, r3, #4
	ldrh r0, [r2]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r3]
	add r3, r3, #4
	ldrh r0, [r2]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r3]
	b _08068CE0
	.byte 0x00
	.byte 0x00
_08068C58:
	.4byte 0x00000982
_08068C5C:
	.4byte 0x04000014
_08068C60:
	.4byte 0x04000006
_08068C64:
	.4byte gUnknown_02001400
_08068C68:
	cmp r0, #4
	bne _08068CE0
	ldr r2, _08068C7C  @ =0x04000006
	ldrh r0, [r2]
	cmp r0, #35
	bne _08068C88
	ldr r0, _08068C80  @ =0x0400001C
	ldr r2, _08068C84  @ =0x00000B74
	add r1, r1, r2
	b _08068CDC
_08068C7C:
	.4byte 0x04000006
_08068C80:
	.4byte 0x0400001C
_08068C84:
	.4byte 0x00000B74
_08068C88:
	ldrh r0, [r2]
	cmp r0, #45
	bne _08068CA0
	ldr r0, _08068C98  @ =0x0400001C
	ldr r2, _08068C9C  @ =0x0000095C
	add r1, r1, r2
	b _08068CDC
	.byte 0x00
	.byte 0x00
_08068C98:
	.4byte 0x0400001C
_08068C9C:
	.4byte 0x0000095C
_08068CA0:
	ldrh r0, [r2]
	cmp r0, #55
	bne _08068CB8
	ldr r0, _08068CB0  @ =0x0400001C
	ldr r2, _08068CB4  @ =0x00000B76
	add r1, r1, r2
	b _08068CDC
	.byte 0x00
	.byte 0x00
_08068CB0:
	.4byte 0x0400001C
_08068CB4:
	.4byte 0x00000B76
_08068CB8:
	ldrh r0, [r2]
	cmp r0, #65
	bne _08068CD0
	ldr r0, _08068CC8  @ =0x0400001C
	ldr r2, _08068CCC  @ =0x00000B78
	add r1, r1, r2
	b _08068CDC
	.byte 0x00
	.byte 0x00
_08068CC8:
	.4byte 0x0400001C
_08068CCC:
	.4byte 0x00000B78
_08068CD0:
	ldrh r0, [r2]
	cmp r0, #80
	bne _08068CE0
	ldr r0, _08068CF0  @ =0x0400001C
	ldr r2, _08068CF4  @ =0x0000095C
	add r1, r5, r2
_08068CDC:
	ldrh r1, [r1]
	strh r1, [r0]
_08068CE0:
	ldr r1, _08068CF8  @ =0x04000202
	mov r0, #2
	strh r0, [r1]
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08068CF0:
	.4byte 0x0400001C
_08068CF4:
	.4byte 0x0000095C
_08068CF8:
	.4byte 0x04000202
	THUMB_FUNC_END sub_08068B7C

