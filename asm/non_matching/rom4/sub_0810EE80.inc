	THUMB_FUNC_START sub_0810EE80
sub_0810EE80: @ 0x0810EE80
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r8, r6
	add r0, r6, #0
	bl sub_0810F024
	ldr r7, _0810EEEC  @ =gRam
	ldr r1, _0810EEF0  @ =0x000009AD
	add r0, r7, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810EEB4
	ldr r0, _0810EEF4  @ =0x00000ED2
	add r4, r7, r0
	add r4, r6, r4
	ldrb r5, [r4]
	add r0, r5, #0
	add r0, r0, #20
	strb r0, [r4]
	add r0, r6, #0
	bl sub_080C9400
	strb r5, [r4]
_0810EEB4:
	add r0, r6, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810EF0A
	mov r0, r8
	bl sub_080C5080
	mov r0, r8
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810EF00
	ldr r1, _0810EEF8  @ =gUnknown_03003E70
	mov r0, #1
	strb r0, [r1]
	ldr r1, _0810EEFC  @ =0x00000546
	add r0, r7, r1
	ldrh r0, [r0]
	mov r1, #129
	lsl r1, r1, #7
	and r1, r1, r0
	neg r0, r1
	orr r0, r0, r1
	lsr r0, r0, #31
	b _0810EF02
_0810EEEC:
	.4byte gRam
_0810EEF0:
	.4byte 0x000009AD
_0810EEF4:
	.4byte 0x00000ED2
_0810EEF8:
	.4byte gUnknown_03003E70
_0810EEFC:
	.4byte 0x00000546
_0810EF00:
	mov r0, #0
_0810EF02:
	cmp r0, #0
	beq _0810EF0A
	mov r0, #0
	b _0810EF0C
_0810EF0A:
	mov r0, #1
_0810EF0C:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0810EE80

	.byte 0x00
	.byte 0x00
