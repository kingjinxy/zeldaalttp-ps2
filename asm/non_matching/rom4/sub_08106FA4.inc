	THUMB_FUNC_START sub_08106FA4
sub_08106FA4: @ 0x08106FA4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	lsl r1, r1, #24
	lsr r6, r1, #24
	add r3, r6, #0
	lsl r0, r3, #24
	asr r0, r0, #24
	ldr r4, _08106FC0  @ =gRam
	cmp r0, #0
	blt _08106FE6
	ldr r2, _08106FC4  @ =0x000011D2
	add r1, r4, r2
	b _08106FD8
_08106FC0:
	.4byte gRam
_08106FC4:
	.4byte 0x000011D2
_08106FC8:
	lsl r0, r3, #24
	mov r2, #255
	lsl r2, r2, #24
	add r0, r0, r2
	lsr r3, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _08106FE6
_08106FD8:
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08106FC8
	lsl r0, r3, #24
	cmp r0, #0
	bge _08106FFC
_08106FE6:
	ldr r0, _08107078  @ =0x00001642
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08106FFA
	strb r6, [r2]
_08106FFA:
	ldrb r3, [r2]
_08106FFC:
	lsl r2, r3, #24
	asr r2, r2, #24
	ldr r1, _0810707C  @ =0x000011D2
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #16
	strb r1, [r0]
	ldr r6, _08107080  @ =0x000015F8
	add r0, r4, r6
	strb r1, [r0]
	ldr r1, _08107084  @ =0x0000131C
	add r0, r4, r1
	add r0, r2, r0
	strb r5, [r0]
	ldr r6, _08107088  @ =0x0000122C
	add r1, r4, r6
	add r1, r2, r1
	ldr r6, _0810708C  @ =0x00000EE2
	add r0, r4, r6
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _08107090  @ =0x00001268
	add r1, r4, r0
	add r1, r2, r1
	add r6, r6, #32
	add r0, r4, r6
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _08107094  @ =0x00000ED2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	sub r6, r6, #16
	add r0, r4, r6
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #16
	ldr r5, _08107098  @ =0x0000120E
	add r0, r4, r5
	add r0, r2, r0
	strb r1, [r0]
	ldr r6, _0810709C  @ =0x0000124A
	add r0, r4, r6
	add r0, r2, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _081070A0  @ =0x000012FE
	add r0, r4, r1
	add r2, r2, r0
	mov r0, #127
	strb r0, [r2]
	mov r2, #150
	lsl r2, r2, #4
	add r0, r4, r2
	strb r3, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
_08107078:
	.4byte 0x00001642
_0810707C:
	.4byte 0x000011D2
_08107080:
	.4byte 0x000015F8
_08107084:
	.4byte 0x0000131C
_08107088:
	.4byte 0x0000122C
_0810708C:
	.4byte 0x00000EE2
_08107090:
	.4byte 0x00001268
_08107094:
	.4byte 0x00000ED2
_08107098:
	.4byte 0x0000120E
_0810709C:
	.4byte 0x0000124A
_081070A0:
	.4byte 0x000012FE
	THUMB_FUNC_END sub_08106FA4

