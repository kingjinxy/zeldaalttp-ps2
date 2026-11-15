	THUMB_FUNC_START sub_08121C0C
sub_08121C0C: @ 0x08121C0C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _08121C74  @ =gRam
	ldr r2, _08121C78  @ =0x00000DCF
	add r1, r4, r2
	add r1, r0, r1
	ldrb r1, [r1]
	ldr r5, _08121C7C  @ =0x00000964
	add r3, r4, r5
	strb r1, [r3]
	add r2, r2, #20
	add r1, r4, r2
	add r1, r0, r1
	ldrb r2, [r1]
	add r5, r5, #1
	add r1, r4, r5
	strb r2, [r1]
	ldr r2, _08121C80  @ =0x00000DC5
	add r1, r4, r2
	add r1, r0, r1
	ldrb r1, [r1]
	ldr r2, _08121C84  @ =0x00000968
	add r5, r4, r2
	strb r1, [r5]
	ldr r2, _08121C88  @ =0x00000DD9
	add r1, r4, r2
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r2, _08121C8C  @ =0x00000969
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _08121C90  @ =0x000016C4
	add r0, r4, r1
	ldrh r0, [r0]
	ldrh r1, [r3]
	sub r0, r0, r1
	add r0, r0, #240
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r3, _08121C94  @ =0x000001DF
	mov r1, #144
	cmp r0, r3
	bls _08121C66
	mov r1, #112
_08121C66:
	mov r2, #128
	lsl r2, r2, #8
	and r0, r0, r2
	cmp r0, #0
	beq _08121C9C
	ldr r2, _08121C98  @ =0x00000961
	b _08121CC0
_08121C74:
	.4byte gRam
_08121C78:
	.4byte 0x00000DCF
_08121C7C:
	.4byte 0x00000964
_08121C80:
	.4byte 0x00000DC5
_08121C84:
	.4byte 0x00000968
_08121C88:
	.4byte 0x00000DD9
_08121C8C:
	.4byte 0x00000969
_08121C90:
	.4byte 0x000016C4
_08121C94:
	.4byte 0x000001DF
_08121C98:
	.4byte 0x00000961
_08121C9C:
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	ldrh r0, [r0]
	ldrh r1, [r5]
	sub r0, r0, r1
	add r0, r0, #240
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r1, #144
	cmp r0, r3
	bls _08121CB6
	mov r1, #112
_08121CB6:
	and r0, r0, r2
	cmp r0, #0
	beq _08121CC4
	mov r2, #150
	lsl r2, r2, #4
_08121CC0:
	add r0, r4, r2
	strb r1, [r0]
_08121CC4:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08121C0C

	.byte 0x00
	.byte 0x00
