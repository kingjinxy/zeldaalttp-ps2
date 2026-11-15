	THUMB_FUNC_START sub_08116AA8
sub_08116AA8: @ 0x08116AA8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _08116BE4  @ =gRam
	ldr r2, _08116BE8  @ =0x000015F7
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _08116AEE
	ldr r3, _08116BEC  @ =0x00000E47
	add r0, r1, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08116AEE
	ldr r5, _08116BF0  @ =0x000017F0
	add r0, r1, r5
	ldrb r0, [r0]
	cmp r0, #0
	beq _08116AE8
	ldr r2, _08116BF4  @ =0x00000996
	add r0, r1, r2
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _08116AEE
_08116AE8:
	ldr r1, _08116BF8  @ =gUnknown_03003E74
	mov r0, #52
	strh r0, [r1]
_08116AEE:
	add r0, r4, #0
	bl sub_080C177C
	ldr r2, _08116BE4  @ =gRam
	mov r3, #150
	lsl r3, r3, #4
	add r6, r2, r3
	ldrh r1, [r6]
	ldr r5, _08116BFC  @ =0x00000968
	add r0, r2, r5
	mov r3, #0
	mov r8, r3
	strh r1, [r0]
	sub r5, r5, #4
	add r0, r2, r5
	ldrh r1, [r0]
	ldr r3, _08116C00  @ =0x0000096C
	add r0, r2, r3
	strh r1, [r0]
	ldr r1, _08116C04  @ =gUnknown_0817EE5F
	ldr r5, _08116C08  @ =0x00000E29
	add r3, r2, r5
	add r3, r4, r3
	ldrb r0, [r3]
	add r0, r0, r1
	ldrb r0, [r0]
	mov r1, #151
	lsl r1, r1, #4
	add r5, r2, r1
	strh r0, [r5]
	ldr r1, _08116C0C  @ =gUnknown_0817EE5C
	ldrb r0, [r3]
	add r0, r0, r1
	ldrb r0, [r0]
	ldr r1, _08116C10  @ =0x00000978
	add r4, r2, r1
	strh r0, [r4]
	ldrb r0, [r3]
	lsl r0, r0, #2
	ldr r3, _08116C14  @ =0x0000097C
	add r1, r2, r3
	strh r0, [r1]
	ldr r1, _08116C18  @ =0x00000974
	add r0, r2, r1
	mov r3, r8
	strh r3, [r0]
	add r7, r2, #0
	mov r8, r0
	mov r10, r6
	ldr r6, _08116BF8  @ =gUnknown_03003E74
	mov r9, r5
_08116B54:
	ldr r4, _08116C14  @ =0x0000097C
	add r0, r7, r4
	mov r1, r8
	ldrh r5, [r1]
	ldrh r0, [r0]
	add r5, r5, r0
	lsl r5, r5, #16
	lsr r5, r5, #16
	ldr r3, _08116BFC  @ =0x00000968
	add r2, r7, r3
	ldr r0, _08116C1C  @ =gUnknown_0817EE6E
	lsl r1, r5, #1
	add r0, r1, r0
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
	mov r4, r10
	strh r0, [r4]
	ldr r0, _08116C00  @ =0x0000096C
	add r2, r7, r0
	ldr r0, _08116C20  @ =gUnknown_0817EE86
	add r1, r1, r0
	ldrh r0, [r1]
	ldrh r2, [r2]
	add r0, r0, r2
	ldr r2, _08116C24  @ =0x00000964
	add r1, r7, r2
	strh r0, [r1]
	ldrh r0, [r6]
	ldrh r1, [r1]
	ldrh r2, [r4]
	ldr r3, _08116C28  @ =gUnknown_0817EE62
	add r5, r5, r3
	ldr r4, _08116C2C  @ =0x00001724
	add r3, r7, r4
	ldrb r3, [r3]
	mov r4, #4
	orr r3, r3, r4
	ldrb r4, [r5]
	orr r3, r3, r4
	lsl r3, r3, #8
	ldr r5, _08116C30  @ =gUnknown_03002BA8
	ldrh r4, [r5]
	orr r3, r3, r4
	mov r5, r9
	ldrb r4, [r5]
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r6]
	add r0, r0, #1
	strh r0, [r6]
	mov r1, #0
	ldrsh r0, [r5, r1]
	cmp r0, #2
	beq _08116BD4
	mov r2, r8
	ldrh r0, [r2]
	add r0, r0, #1
	strh r0, [r2]
	lsl r0, r0, #16
	asr r0, r0, #16
	cmp r0, #4
	bne _08116B54
_08116BD4:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08116BE4:
	.4byte gRam
_08116BE8:
	.4byte 0x000015F7
_08116BEC:
	.4byte 0x00000E47
_08116BF0:
	.4byte 0x000017F0
_08116BF4:
	.4byte 0x00000996
_08116BF8:
	.4byte gUnknown_03003E74
_08116BFC:
	.4byte 0x00000968
_08116C00:
	.4byte 0x0000096C
_08116C04:
	.4byte gUnknown_0817EE5F
_08116C08:
	.4byte 0x00000E29
_08116C0C:
	.4byte gUnknown_0817EE5C
_08116C10:
	.4byte 0x00000978
_08116C14:
	.4byte 0x0000097C
_08116C18:
	.4byte 0x00000974
_08116C1C:
	.4byte gUnknown_0817EE6E
_08116C20:
	.4byte gUnknown_0817EE86
_08116C24:
	.4byte 0x00000964
_08116C28:
	.4byte gUnknown_0817EE62
_08116C2C:
	.4byte 0x00001724
_08116C30:
	.4byte gUnknown_03002BA8
	THUMB_FUNC_END sub_08116AA8

