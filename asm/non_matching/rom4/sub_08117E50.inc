	THUMB_FUNC_START sub_08117E50
sub_08117E50: @ 0x08117E50
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r2, r0, #24
	cmp r2, #0
	beq _08117E70
	b _08118010
_08117E70:
	ldr r4, _08117F7C  @ =gRam
	mov r1, sp
	ldr r3, _08117F80  @ =0x00000E29
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	ldr r7, _08117F84  @ =0x00000A92
	add r0, r4, r7
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	ldr r2, _08117F88  @ =0x00001844
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	ldr r3, _08117F8C  @ =0x00001744
	add r1, r4, r3
	mov r0, #80
	strb r0, [r1]
	mov r0, sp
	ldrb r1, [r0]
	ldr r7, _08117F90  @ =0x00000E3D
	add r2, r4, r7
	add r1, r1, r2
	ldr r0, _08117F94  @ =0x000016D5
	add r5, r4, r0
	ldrb r0, [r5]
	lsr r0, r0, #1
	strb r0, [r1]
	ldr r1, _08117F98  @ =gUnknown_0817F0D4
	mov r0, sp
	ldrb r3, [r0]
	add r2, r3, r2
	ldrb r0, [r2]
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r2, _08117F9C  @ =0x00001855
	add r0, r4, r2
	add r3, r3, r0
	ldr r0, _08117FA0  @ =gUnknown_0817F0AC
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r3]
	mov r3, #182
	lsl r3, r3, #5
	add r3, r3, r4
	mov r8, r3
	ldr r0, _08117FA4  @ =gUnknown_0817F278
	ldrb r1, [r5]
	lsr r1, r1, #1
	lsl r1, r1, #1
	add r0, r1, r0
	ldrh r0, [r0]
	ldrh r7, [r3]
	add r0, r0, r7
	ldr r3, _08117FA8  @ =0x00000968
	add r2, r4, r3
	strh r0, [r2]
	ldr r7, _08117FAC  @ =0x000016C4
	add r6, r4, r7
	ldr r0, _08117FB0  @ =gUnknown_0817F280
	add r1, r1, r0
	ldrh r0, [r1]
	ldrh r1, [r6]
	add r0, r0, r1
	ldr r7, _08117FB4  @ =0x0000096C
	add r3, r4, r7
	strh r0, [r3]
	mov r1, sp
	ldr r7, _08117FB8  @ =0x00000DC5
	add r0, r4, r7
	ldrb r1, [r1]
	add r0, r0, r1
	ldrb r1, [r2]
	strb r1, [r0]
	mov r1, sp
	ldr r2, _08117FBC  @ =0x00000DD9
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	ldr r7, _08117FC0  @ =0x00000969
	add r1, r4, r7
	ldrb r1, [r1]
	strb r1, [r0]
	mov r1, sp
	sub r2, r2, #10
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	ldrb r1, [r3]
	strb r1, [r0]
	mov r1, sp
	ldr r3, _08117FC4  @ =0x00000DE3
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	add r7, r7, #4
	add r1, r4, r7
	ldrb r1, [r1]
	strb r1, [r0]
	mov r0, sp
	ldrb r0, [r0]
	mov r1, #0
	bl sub_080BFA64
	mov r1, sp
	ldr r2, _08117FC8  @ =0x0000187A
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	ldrb r1, [r0]
	mov r3, #190
	lsl r3, r3, #5
	add r0, r4, r3
	strb r1, [r0]
	ldr r7, _08117FCC  @ =0x0000178D
	add r0, r4, r7
	ldrb r0, [r0]
	cmp r0, #9
	bne _08117FD4
	mov r0, sp
	ldr r2, _08117FD0  @ =0x00000E15
	add r1, r4, r2
	ldrb r0, [r0]
	add r1, r1, r0
	mov r0, #0
	strb r0, [r1]
	b _08118010
	.byte 0x00
	.byte 0x00
_08117F7C:
	.4byte gRam
_08117F80:
	.4byte 0x00000E29
_08117F84:
	.4byte 0x00000A92
_08117F88:
	.4byte 0x00001844
_08117F8C:
	.4byte 0x00001744
_08117F90:
	.4byte 0x00000E3D
_08117F94:
	.4byte 0x000016D5
_08117F98:
	.4byte gUnknown_0817F0D4
_08117F9C:
	.4byte 0x00001855
_08117FA0:
	.4byte gUnknown_0817F0AC
_08117FA4:
	.4byte gUnknown_0817F278
_08117FA8:
	.4byte 0x00000968
_08117FAC:
	.4byte 0x000016C4
_08117FB0:
	.4byte gUnknown_0817F280
_08117FB4:
	.4byte 0x0000096C
_08117FB8:
	.4byte 0x00000DC5
_08117FBC:
	.4byte 0x00000DD9
_08117FC0:
	.4byte 0x00000969
_08117FC4:
	.4byte 0x00000DE3
_08117FC8:
	.4byte 0x0000187A
_08117FCC:
	.4byte 0x0000178D
_08117FD0:
	.4byte 0x00000E15
_08117FD4:
	ldr r1, _0811801C  @ =gUnknown_0817F268
	ldrb r0, [r5]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r1, r0, r1
	ldrh r1, [r1]
	mov r3, r8
	ldrh r3, [r3]
	add r1, r1, r3
	mov r7, #150
	lsl r7, r7, #4
	add r2, r4, r7
	strh r1, [r2]
	ldr r1, _08118020  @ =gUnknown_0817F270
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r6, [r6]
	add r0, r0, r6
	ldr r2, _08118024  @ =0x00000964
	add r1, r4, r2
	strh r0, [r1]
	mov r0, sp
	ldrb r0, [r0]
	mov r1, #43
	bl sub_080C19F8
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_08118010:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_0811801C:
	.4byte gUnknown_0817F268
_08118020:
	.4byte gUnknown_0817F270
_08118024:
	.4byte 0x00000964
	THUMB_FUNC_END sub_08117E50

