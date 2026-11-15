	THUMB_FUNC_START sub_080BB910
sub_080BB910: @ 0x080BB910
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	ldr r1, _080BB9C4  @ =gRam
	ldr r0, _080BB9C8  @ =0x000016C4
	add r3, r1, r0
	ldrh r2, [r3]
	str r2, [sp]
	sub r0, r0, #4
	add r2, r1, r0
	ldrh r0, [r2]
	str r0, [sp, #4]
	mov r0, #239
	lsl r0, r0, #3
	strh r0, [r3]
	ldr r0, _080BB9CC  @ =0x00000EFA
	strh r0, [r2]
	mov r0, #15
	mov r9, r0
	mov r10, r1
_080BB93E:
	ldr r0, _080BB9D0  @ =0x00000FF2
	add r0, r0, r10
	mov r3, r9
	add r2, r3, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _080BB94E
	b _080BBAFA
_080BB94E:
	ldr r3, _080BB9D4  @ =0x00000FD2
	add r0, r1, r3
	mov r3, r9
	add r1, r3, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080BB960
	sub r0, r0, #1
	strb r0, [r1]
_080BB960:
	ldrb r0, [r2]
	cmp r0, #168
	beq _080BB968
	b _080BBAA2
_080BB968:
	ldr r0, _080BB9D8  @ =0x00000F62
	add r0, r0, r10
	add r0, r0, r9
	ldrb r0, [r0]
	cmp r0, #0
	beq _080BB976
	b _080BBAA2
_080BB976:
	ldr r1, _080BB9DC  @ =0x00000996
	add r1, r1, r10
	mov r2, r9
	lsl r0, r2, #5
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r3, r0, #1
	ldr r1, _080BB9E0  @ =0x000001FF
	add r0, r1, #0
	and r3, r3, r0
	add r4, r3, #0
	add r4, r4, #128
	and r4, r4, r0
	mov r2, #128
	lsl r2, r2, #1
	add r1, r2, #0
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080BB9EC
	ldr r2, _080BB9E4  @ =gUnknown_08173F38
	mov r0, #128
	lsl r0, r0, #2
	sub r0, r0, r3
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r1, [r0]
	lsl r0, r1, #3
	sub r0, r0, r1
	asr r0, r0, #5
	ldr r3, _080BB9E8  @ =gPlayerYPosition
	ldrh r1, [r3]
	sub r1, r1, r0
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r10
	strh r1, [r0]
	b _080BBA08
	.byte 0x00
	.byte 0x00
_080BB9C4:
	.4byte gRam
_080BB9C8:
	.4byte 0x000016C4
_080BB9CC:
	.4byte 0x00000EFA
_080BB9D0:
	.4byte 0x00000FF2
_080BB9D4:
	.4byte 0x00000FD2
_080BB9D8:
	.4byte 0x00000F62
_080BB9DC:
	.4byte 0x00000996
_080BB9E0:
	.4byte 0x000001FF
_080BB9E4:
	.4byte gUnknown_08173F38
_080BB9E8:
	.4byte gPlayerYPosition
_080BB9EC:
	ldr r2, _080BBA34  @ =gUnknown_08173F38
	lsl r0, r3, #1
	add r0, r0, r2
	ldrh r1, [r0]
	lsl r0, r1, #3
	sub r0, r0, r1
	asr r0, r0, #5
	ldr r1, _080BBA38  @ =gPlayerYPosition
	ldrh r1, [r1]
	add r0, r0, r1
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r10
	strh r0, [r1]
_080BBA08:
	mov r3, #128
	lsl r3, r3, #1
	add r1, r3, #0
	add r0, r4, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080BBA44
	mov r0, #128
	lsl r0, r0, #2
	sub r0, r0, r4
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	lsl r1, r0, #3
	sub r1, r1, r0
	asr r1, r1, #5
	ldr r2, _080BBA3C  @ =gPlayerXPosition
	ldrh r0, [r2]
	sub r0, r0, r1
	ldr r3, _080BBA40  @ =gUnknown_03002B94
	strh r0, [r3]
	b _080BBA5A
_080BBA34:
	.4byte gUnknown_08173F38
_080BBA38:
	.4byte gPlayerYPosition
_080BBA3C:
	.4byte gPlayerXPosition
_080BBA40:
	.4byte gUnknown_03002B94
_080BBA44:
	lsl r0, r4, #1
	add r0, r0, r2
	ldrh r1, [r0]
	lsl r0, r1, #3
	sub r0, r0, r1
	asr r0, r0, #5
	ldr r1, _080BBB30  @ =gPlayerXPosition
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r2, _080BBB34  @ =gUnknown_03002B94
	strh r0, [r2]
_080BBA5A:
	ldr r1, _080BBB38  @ =0x00000EE2
	add r1, r1, r10
	add r1, r1, r9
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r10
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080BBB3C  @ =0x00000F02
	add r1, r1, r10
	add r1, r1, r9
	ldr r0, _080BBB40  @ =0x00000961
	add r0, r0, r10
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080BBB44  @ =0x00000ED2
	add r0, r0, r10
	add r0, r0, r9
	ldr r3, _080BBB34  @ =gUnknown_03002B94
	ldrb r1, [r3]
	strb r1, [r0]
	ldr r1, _080BBB48  @ =0x00000EF2
	add r1, r1, r10
	add r1, r1, r9
	ldr r0, _080BBB4C  @ =0x00000965
	add r0, r0, r10
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080BBB50  @ =0x00000F22
	add r0, r0, r10
	add r0, r0, r9
	mov r1, #0
	strb r1, [r0]
	ldr r0, _080BBB54  @ =gUnknown_03003142
	add r0, r0, r9
	strb r1, [r0]
_080BBAA2:
	mov r2, r9
	lsl r6, r2, #24
	lsr r6, r6, #24
	ldr r7, _080BBB58  @ =gRam
	ldr r3, _080BBB5C  @ =0x00001012
	add r0, r7, r3
	add r0, r0, r9
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #2
	ldr r2, _080BBB60  @ =0x000015DC
	add r1, r7, r2
	strb r6, [r1]
	bl sub_080CF370
	add r0, r6, #0
	bl sub_080C1F70
	ldr r3, _080BBB64  @ =0x000009AD
	add r5, r7, r3
	ldrb r0, [r5]
	mov r8, r0
	mov r1, #0
	strb r1, [r5]
	ldr r2, _080BBB68  @ =0x00000FA2
	add r4, r7, r2
	add r1, r6, r4
	mov r0, #9
	strb r0, [r1]
	add r0, r6, #0
	bl SpriteActive_MainLong
	mov r3, r8
	strb r3, [r5]
	add r4, r4, r9
	ldrb r2, [r4]
	cmp r2, #0
	bne _080BBAFA
	ldr r1, _080BBB6C  @ =0x00000FF2
	add r0, r7, r1
	add r0, r0, r9
	strb r2, [r0]
_080BBAFA:
	mov r2, #1
	neg r2, r2
	add r9, r9, r2
	ldr r1, _080BBB58  @ =gRam
	mov r3, r9
	cmp r3, #0
	blt _080BBB0A
	b _080BB93E
_080BBB0A:
	ldr r2, _080BBB70  @ =0x000016C4
	add r0, r1, r2
	mov r3, sp
	ldrh r3, [r3]
	strh r3, [r0]
	sub r2, r2, #4
	add r0, r1, r2
	mov r3, sp
	ldrh r3, [r3, #4]
	strh r3, [r0]
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BBB30:
	.4byte gPlayerXPosition
_080BBB34:
	.4byte gUnknown_03002B94
_080BBB38:
	.4byte 0x00000EE2
_080BBB3C:
	.4byte 0x00000F02
_080BBB40:
	.4byte 0x00000961
_080BBB44:
	.4byte 0x00000ED2
_080BBB48:
	.4byte 0x00000EF2
_080BBB4C:
	.4byte 0x00000965
_080BBB50:
	.4byte 0x00000F22
_080BBB54:
	.4byte gUnknown_03003142
_080BBB58:
	.4byte gRam
_080BBB5C:
	.4byte 0x00001012
_080BBB60:
	.4byte 0x000015DC
_080BBB64:
	.4byte 0x000009AD
_080BBB68:
	.4byte 0x00000FA2
_080BBB6C:
	.4byte 0x00000FF2
_080BBB70:
	.4byte 0x000016C4
	THUMB_FUNC_END sub_080BB910

