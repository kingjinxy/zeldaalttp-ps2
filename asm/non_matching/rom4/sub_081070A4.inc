	THUMB_FUNC_START sub_081070A4
sub_081070A4: @ 0x081070A4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _08107118  @ =gRam
	ldr r1, _0810711C  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _081070E0
	add r0, r4, #0
	bl sub_080C36D8
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _08107120  @ =0x00000F22
	add r0, r5, r1
	add r3, r4, r0
	ldr r0, _08107124  @ =gUnknown_0817BFA3
	add r0, r2, r0
	ldrb r1, [r3]
	ldrb r0, [r0]
	cmp r1, r0
	beq _081070E0
	ldr r0, _08107128  @ =gUnknown_0817BFA5
	add r0, r2, r0
	ldrb r0, [r0]
	add r0, r1, r0
	strb r0, [r3]
_081070E0:
	add r0, r4, #0
	bl sub_080C7A48
	lsl r0, r0, #24
	cmp r0, #0
	beq _08107112
	ldr r0, _08107118  @ =gRam
	ldr r1, _0810712C  @ =0x00000FA2
	add r0, r0, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	ldr r0, _08107130  @ =gMagicMeter
	ldrb r0, [r0]
	cmp r0, #7
	bhi _08107112
	bl GetRandomInt
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	bne _08107112
	add r0, r4, #0
	bl sub_0810364C
_08107112:
	pop {r4,r5}
	pop {r0}
	bx r0
_08107118:
	.4byte gRam
_0810711C:
	.4byte 0x00000996
_08107120:
	.4byte 0x00000F22
_08107124:
	.4byte gUnknown_0817BFA3
_08107128:
	.4byte gUnknown_0817BFA5
_0810712C:
	.4byte 0x00000FA2
_08107130:
	.4byte gMagicMeter
	THUMB_FUNC_END sub_081070A4

